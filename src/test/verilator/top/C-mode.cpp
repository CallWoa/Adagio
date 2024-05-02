#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <random>
#include <bitset>
// #include "VTop.h"
// #include "verilated.h"
// #include <verilated_vcd_c.h> 
using namespace std;

class FIFO {
    public:
        FIFO(int size);
        bool isEmpty();
        bool isFull();
        bool write(unsigned long long data);
        bool read(unsigned long long* data);
    private:
        unsigned long long* __ptr_wr;
        unsigned long long* __ptr_rd;
        unsigned long long* __dataQueue;
        unsigned long long* __maxaddr;
};

class fp16 {
    public: 
        int sign();
        int exp();
        int sig();
        unsigned long long decimal ();
        bitset<16> binary();
        void random();
    private:
        int __sign;
        int __exponent;
        int __significant;
        bitset<16> __binary;
};

class tensorFP32 {
    public:
        tensorFP32(int m, int n, int k);
        // int m();
        // int n();
        // int n();
        void print();
        vector<vector<float> > mma();
        // vector<vector<float>> readtile(int tcNo, int otNo, int tgNo, char matrixTag);
    private:
        int __m;
        int __n;
        int __k;
        vector<vector<float> > __matrix_a;
        vector<vector<float> > __matrix_b;
        vector<vector<float> > __matrix_c; 
        float FEDP(vector<float> a, vector<float> b);
};

int randint(int min, int max); 
float fp16todec (fp16 n);

int main() {
    tensorFP32 tensor_m2n4k4(2, 4, 4);
    tensor_m2n4k4.print();
    tensor_m2n4k4.mma();
    return 0;
}

/*------------------------------------------------------------------------
  class fp16
*------------------------------------------------------------------------*/
int fp16 :: sign(){
    return __sign;
}
int fp16 :: sig(){
    return __significant;
}
int fp16 :: exp(){
    return __exponent;
}
unsigned long long fp16 :: decimal(){
    return __binary.to_ullong();
} 
bitset<16> fp16 :: binary(){
    return __binary;
}
void fp16 :: random(){
    __sign = randint(0, 1);
    __exponent = randint(0, 30);
    __significant = randint(0, 1023);
    bitset<1> sign (__sign);
    bitset<5> exponent (__exponent);
    bitset<10> sig (__significant);
    for(int i = 0; i < 16; ++i){
        if(i < 10 && sig[i]){
            __binary.set(i);
        }else if(i >= 10 && i < 15 && exponent[i - 10]) {
            __binary.set(i);
        }else if(i == 15 && sign[0]){
            __binary.set(i);
        }else{
            __binary.reset(i);
        }
    }
}

int randint(int min, int max){
    random_device seed;
	ranlux48 engine(seed());
    uniform_int_distribution<> distrib(min, max);
    int random = distrib(engine);
    return random;
}

float fp16todec (fp16 n){
    bitset<1> sign (n.sign());
    bitset<5> exponent (n.exp());
    bitset<10> sig (n.sig());
    bool subnormal = exponent.none();
    float decSig = subnormal? 0 : 1;
    int expBias = subnormal? 14 : 15;
    int decExp = 0;
    for (int i = 0; i < 10; ++i) {
        decSig = decSig + sig[i] * pow(2, i - 10);
    }
    for (int i = 0; i < 5; ++i) {
        decExp = decExp + exponent[i] * pow(2, i);
    }
    // cout << "decSig: " << decSig << '\n';
    // cout << "decExp: " << decExp << '\n';
    float decNum = (sign[0]? -1 : 1) * decSig * pow(2, decExp - expBias);
    return decNum;
}

/*------------------------------------------------------------------------
  class tensor
*------------------------------------------------------------------------*/
tensorFP32 :: tensorFP32(int m, int n, int k){
    __m = m;
    __n = n;
    __k = k;

    vector<vector<float> > matrix_a(__m, vector<float>(__n));
    vector<vector<float> > matrix_b(__n, vector<float>(__k));
    vector<vector<float> > matrix_c(__m, vector<float>(__k)); 
    fp16 randNumA, randNumB, randNumC;

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            randNumA.random();
            float dec = fp16todec(randNumA);
            // vec_errorA[i] = randNumA.binary();
            // vec_errorB[i] = randNumB.binary();
            // vec_a[i] = randNumA.decimal();
            // vec_b[i] = randNumB.decimal();
            // mul_result[i] = decA * decB;
            matrix_a[i][j] = dec;
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            randNumB.random();
            float dec = fp16todec(randNumB);
            matrix_b[i][j] = dec;
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < k; ++j){
            randNumC.random();
            float dec = fp16todec(randNumC);
            matrix_c[i][j] = dec;
        }
    }

    __matrix_a = matrix_a;
    __matrix_b = matrix_b;
    __matrix_c = matrix_c;

}

vector<vector<float> > tensorFP32 :: mma(){
    vector<vector<float> > matrix_d(__m, vector<float>(__k));
    vector<float> vec_a(__n);
    vector<float> vec_b(__n);

    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __k; ++j){
            for(int k = 0; k < __n; ++k){
                vec_a[k] = __matrix_a[i][k];
                vec_b[k] = __matrix_b[k][j];
            }
            matrix_d[i][j] = FEDP(vec_a, vec_b);
        }
    }

    cout <<" **********  matrixD  **********"<<endl;
    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __k; ++j){
            cout << " || " << matrix_d[i][j];
        }
        cout << " ||\n";
    }

    return matrix_d;
}

void tensorFP32 :: print(){
    cout <<" **********  matrixA  **********"<<endl;
    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __n; ++j){
            cout << " || " << __matrix_a[i][j];
        }
        cout << " ||\n";
    }
    cout <<" **********  matrixB  **********"<<endl;
    for(int i = 0; i < __n; ++i){
        for(int j = 0; j < __k; ++j){
            cout << " || " << __matrix_b[i][j];
        }
        cout << " ||\n";
    }
    cout <<" **********  matrixC  **********"<<endl;
    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __k; ++j){
            cout << " || " << __matrix_c[i][j];
        }
        cout << " ||\n";
    } 
}

float tensorFP32 :: FEDP(vector<float> a, vector<float> b){
    float mul_result[4];
    float addfirstresult[2];
    for(int i = 0; i < 4; ++i){
        mul_result[i] = a[i] * b[i];
    }
    addfirstresult[0] = mul_result[0] + mul_result[1];
    addfirstresult[1] = mul_result[2] + mul_result[3];
    return addfirstresult[0] + addfirstresult[1]; 
}




/*------------------------------------------------------------------------
  class FIFO
*------------------------------------------------------------------------*/
FIFO :: FIFO(int size){
    __dataQueue = new unsigned long long[size];
    __maxaddr = __dataQueue + size; 
    __ptr_rd = __dataQueue;
    __ptr_wr = __dataQueue;
}

bool FIFO :: isEmpty(){
    return __ptr_rd == __ptr_wr;
}

bool FIFO :: isFull(){
    unsigned long long* ptr_wr_next;
    if(__ptr_wr == __maxaddr){
        ptr_wr_next = __dataQueue;
    }else{
        ptr_wr_next = __ptr_wr + 1;
    }
    return ptr_wr_next == __ptr_rd;
}

bool FIFO :: write(unsigned long long data){
    if(isFull()){
        return false;
    }else{
        * __ptr_wr = data;
        if(__ptr_wr == __maxaddr) {
            __ptr_wr = __dataQueue;
        }else{
            __ptr_wr ++;
        } 
        return true;
    }

}

bool FIFO :: read(unsigned long long* data){
    if(isEmpty()){
        return false;
    }else{
        *data = * __ptr_rd;
        if(__ptr_rd == __maxaddr) {
            __ptr_rd = __dataQueue;
        }else{
            __ptr_rd ++;
        } 
        return true;
    }
}