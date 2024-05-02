#include <cstdint>
#include <iostream>
#include <math.h>
#include <random>
#include <bitset>
using namespace std;

class fp16 {
    public: 
        fp16();
        fp16(bitset<16> bin);
        bitset<1> sign();
        bitset<5> exp();
        bitset<10> sig();
        unsigned long long decimal ();
        bitset<16> binary();
        float todec();
    private:
        bitset<1>  __sign;
        bitset<5>  __exponent;
        bitset<10> __significant;
        bitset<16> __binary;
};
int randint(int min, int max);
unsigned long floatToFP16(float value);


int main() {
    // for(int i = 0; i < 20000; ++i){
    //     fp16 randNum;
    //     float floatValue = randNum.todec();
    //     unsigned long result = floatToFP16(floatValue);
    //     unsigned long ref_result = randNum.binary().to_ulong();
    //     if(result != ref_result){
    //         printf("floatValue: %f\n", floatValue);
    //         printf("result: %lx\n", result);
    //         printf("ref_result: %lx\n", ref_result);
    //     }
    // }
    // printf("!!!! TEST PASS !!!!");
    // return 0;

    float floatValue = 0.249959;
    unsigned long result = floatToFP16(floatValue);
    printf("result: %lx\n", result);
    return 0;
}

/*------------------------------------------------------------------------
  class fp16
*------------------------------------------------------------------------*/
fp16 :: fp16(){
    int s = randint(0, 1);
    int exp = randint(0, 30); //0-30
    int sig = randint(0, 1023);
    bitset<1> sign (s);
    bitset<5> exponent (exp);
    bitset<10> significant (sig);
    __sign = sign;
    __exponent = exponent;
    __significant = significant;
    for(int i = 0; i < 16; ++i){
        if(i < 10 && significant[i]){
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
fp16 :: fp16(bitset<16> bin){
    __binary = bin;
    bitset<1> sign;
    bitset<5> exponent;
    bitset<10> sig;
    for(int i = 0; i < 16; ++i){
        if(i < 10 && bin[i]){
            sig.set(i);
        }else if(i >= 10 && i < 15 && bin[i]) {
            exponent.set(i - 10);
        }else if(i == 15 && bin[i]){
            sign.set(0);
        }
    }  
    __sign = sign;
    __exponent = exponent;
    __significant = sig;
}
bitset<1> fp16 :: sign(){
    return __sign;
}
bitset<10> fp16 :: sig(){
    return __significant;
}
bitset<5> fp16 :: exp(){
    return __exponent;
}
unsigned long long fp16 :: decimal(){
    return __binary.to_ullong();
} 
bitset<16> fp16 :: binary(){
    return __binary;
}

float fp16 :: todec() {
    bool subnormal = __exponent.none();
    float decSig = subnormal? 0 : 1;
    int expBias = subnormal? 14 : 15;
    int decExp = 0;
    for (int i = 0; i < 10; ++i) {
        decSig = decSig + __significant[i] * pow(2, i - 10);
    }
    for (int i = 0; i < 5; ++i) {
        decExp = decExp + __exponent[i] * pow(2, i);
    }
    // cout << "decSig: " << decSig << '\n';
    // cout << "decExp: " << decExp << '\n';
    float decNum = (__sign[0]? -1 : 1) * decSig * pow(2, decExp - expBias);
    return decNum;
}

int randint(int min, int max){
    random_device seed;
	ranlux48 engine(seed());
    uniform_int_distribution<> distrib(min, max);
    int random = distrib(engine);
    return random;
}

unsigned long floatToFP16(float value) {
    uint32_t f32Bits = reinterpret_cast<uint32_t &>(value);
    bool sign = (f32Bits >> 31) != 0;
    int32_t exponent = ((f32Bits >> 23) & 0xFF) - 127; 
    uint32_t significand = f32Bits & 0x7FFFFF; 

    int16_t fp16Exponent = 0;
    if (exponent > 15) { // Overflow
        fp16Exponent = 31; // fp16 max exponent
        significand = 0;   
    } else if (exponent >= -14) { 
        fp16Exponent = exponent + 15; // Add bias (15 for fp16)
    } else if (exponent >= -25){ // Underflow -> zero or subnormal
        fp16Exponent = 0;
        significand |= 0x800000;
        significand >>=  - (14 + exponent);
    }else{
        fp16Exponent = 0;
        significand = 0;
    }

    uint16_t fp16Bits;
    bool guard = significand & 0x2000;
    bool round = significand & 0x1000;
    bool sticky = significand & 0xfff;
    if(((round && sticky) || (round && !sticky && guard))){
        if(((significand >> 13) | 0x0) == 0x3FF){
            fp16Bits = (sign << 15) | ((fp16Exponent + 1) << 10) | 0x0;
            cout << "this way" << endl;
        }else{
            fp16Bits = (sign << 15) | (fp16Exponent << 10) | (((significand >> 13) + 1) & 0x3FF);
        }
    }else{
        // Combine sign, exponent, and significand into fp16 representation
        fp16Bits = (sign << 15) | (fp16Exponent << 10) | (significand >> 13);
    }

    return (static_cast<unsigned long>(-1) >> 16) & static_cast<unsigned long>(fp16Bits);
}