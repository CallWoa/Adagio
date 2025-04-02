#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <random>
#include <bitset>
#include "VDotProdUnit.h"
#include "verilated.h"
#include <verilated_vcd_c.h> 
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

int randint(int min, int max); 
float fp16todec (fp16 n);

#define MAX_SIM_TIME 6  // 仿真总时钟边沿数
vluint64_t sim_time = 0; // 用于计数时钟边沿

int main(int argc, char** argv, char** env) {
	VDotProdUnit dut; 
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC; 
	dut.trace(m_trace, 5); 
	m_trace->open("waveform.vcd"); 
/*------------------------------------------------------------------------
  TestBench
*------------------------------------------------------------------------*/
    for(int i = 0; i<10; i++){
        dut.reset = 1;
        dut.clock = 0;
        dut.eval();
        dut.clock = 1;
        dut.eval();
    }
    dut.reset = 0;
    dut.clock =0;
    dut.eval();
    dut.clock = 1;
    dut.eval();

    unsigned long long vec_a [4];
    unsigned long long vec_b [4];
    unsigned long long dut_result, dut_fflags;


    dut.io_out_ready = 1;
    uint64_t cnt = 0;
    uint64_t error = 0;
    fp16 randNumA, randNumB;
    bitset<16> vec_errorA [4];
    bitset<16> vec_errorB [4];
    float mul_result[4];
    float addfirstresult[2];

    FIFO pipeline(4);

    for(int j = 0; j < 46466; ++j){
        float ref_result = 0;
        for (int i = 0; i < 4; ++i){
            randNumA.random();
            randNumB.random();
            float decA = fp16todec(randNumA);
            float decB = fp16todec(randNumB);
            vec_errorA[i] = randNumA.binary();
            vec_errorB[i] = randNumB.binary();
            vec_a[i] = randNumA.decimal();
            vec_b[i] = randNumB.decimal();
            mul_result[i] = decA * decB;
        }
        addfirstresult[0] = mul_result[0] + mul_result[1];
        addfirstresult[1] = mul_result[2] + mul_result[3];
        ref_result = addfirstresult[0] + addfirstresult[1]; 

        dut.io_in_valid = 1;
        dut.io_in_bits_vec_a_0 = vec_a[0];
        dut.io_in_bits_vec_a_1 = vec_a[1];
        dut.io_in_bits_vec_a_2 = vec_a[2];
        dut.io_in_bits_vec_a_3 = vec_a[3];
        dut.io_in_bits_vec_b_0 = vec_b[0];
        dut.io_in_bits_vec_b_1 = vec_b[1];
        dut.io_in_bits_vec_b_2 = vec_b[2];
        dut.io_in_bits_vec_b_3 = vec_b[3];


        dut.clock = 0;
        dut.eval();
        dut.clock = 1;
        dut.eval();
        
        dut_result = dut.io_out_bits_result;
        unsigned long long ref_result_hex;  
        ref_result_hex = ((unsigned long long*) &ref_result)[0];
        pipeline.write(ref_result_hex);     
        
        if(j > 1){ 
            unsigned long long pipeline_data; 
            pipeline.read(&pipeline_data); //点积运算C-Mode运行结果
            if (dut_result != pipeline_data){ //与实际硬件V-Mode运行结果进行比对
                while (sim_time < MAX_SIM_TIME) { //若C-Mode与V-mode运行结果不同则提取此次计算的硬件波形
	                dut.clock ^= 1;
	                dut.eval(); 
	                m_trace->dump(sim_time);
	                sim_time++;
	            } 
                //打印 V-mode 运行结果 以及 C-Mode 运行参考结果
                printf("[%ld] dut_result: %lx \n", cnt, dut_result); 
                printf("[%ld] ref_result: %lx \n", cnt, pipeline_data);
                error ++;
                m_trace->close();
	            exit(EXIT_SUCCESS);
                return -1; //终止程序
            }
            cnt ++; //若C-Mode与V-mode运行结果相同则继续循环送入随机数反复测试
        }
    }
    cout << "[" << cnt << "]!!!!!! TEST PASS !!!!!!" << endl;
    return 0;
}

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

// int main() {
//     float vec_a [4];
//     float vec_b [4];
//     float result = 0;
//     for (int i = 0; i <= 4; ++i){
//         fp16 randNumA, randNumB;
//         randNumA.random();
//         randNumB.random();
//         float decA = fp16todec(randNumA);
//         float decB = fp16todec(randNumB);
//         cout << "A: " << decA << " || binary: " << randNumA.binary() << " || decimal: " << randNumA.decimal() << '\n';
//         cout << "B: " << decB << " || binary: " << randNumB.binary() << " || decimal: " << randNumB.decimal() << "\n//*********************//\n"; 
//         vec_a[i] = decA;
//         vec_b[i] = decB;
//         result += decA * decB;
//     }
//     cout << "result: " << result << endl;
//     // for (int i = 0; i < 10; ++i){
//     //     fp16 randNum;
//     //     randNum._random();
//     //     float random = fp16todec(randNum._sign(), randNum._exp(), randNum._sig());
//     //     // int random = randint();
//     //     // cout << "二进制： " << bitset< sizeof(random)*8 >(random) << endl;
//     //     cout << "random(decimal): " << random << "\n//*********************//" << endl;
//     //     // printf("random: %d \n", random);
//     // }
//     return 0;
// }

                // for (int i = 0; i < 4; ++i){
                //     cout << "A: " << vec_errorA[i] << '\n';
                //     cout << "B: " << vec_errorB[i] << '\n';
                //     printf("mul_result: %lx \n", ((unsigned int*) &mul_result[i])[0]);
                //     cout << "//*********************//\n" ; 
                // }
                // printf("addfirstresult_0: %lx \n", ((unsigned int*) &addfirstresult[0])[0]);
                // printf("addfirstresult_1: %lx \n", ((unsigned int*) &addfirstresult[1])[0]);