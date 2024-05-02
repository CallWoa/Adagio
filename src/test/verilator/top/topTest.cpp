#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <random>
#include <bitset>
#include "VTop.h"
#include "verilated.h"
#include <verilated_vcd_c.h> 
using namespace std;

#define MIXPC false
#define MAX_SET 4
#define MAX_STEP (MIXPC? 4 : 2)

struct matrix{
    vector<vector<float> > a;
    vector<vector<float> > b;
    vector<vector<float> > c;
    vector<vector<unsigned long> > d; 
};

class FIFO {
    private:
        matrix* __ptr_wr;
        matrix* __ptr_rd;
        matrix* __dataQueue;
        matrix* __maxaddr; 
    public:
        FIFO(int size);
        bool isEmpty();
        bool isFull();
        void write( vector<vector<float> > a,
                    vector<vector<float> > b,
                    vector<vector<float> > c, 
                    vector<vector<unsigned long> > d);
        matrix read();
};

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

class fp32 {
    public: 
        fp32();
        fp32(bitset<32> bin);
        bitset<1>  sign();
        bitset<8>  exp();
        bitset<23> sig();
        unsigned long long decimal ();
        bitset<32> binary();
        float todec();
    private:
        bitset<1>  __sign;
        bitset<8>  __exponent;
        bitset<23> __significant;
        bitset<32> __binary;
};

class tensor {
    public:
        tensor(int m, int n, int k, bool mixPc);
        void print();
        void mma(unsigned long dut_matrix_d_ulong[8][MAX_STEP][8]);
        void mma_debug(int tg);
        void getTile( int tcNo, int otNo, int tgNo, 
                        int set, int step, char matrixTag, 
                        unsigned long mat_ulong[8]);
    private:
        int __m;
        int __n;
        int __k;
        bool __mixPc;
        vector<vector<bitset<16> > > __matrix_a;
        vector<vector<bitset<16> > > __matrix_b;
        vector<vector<bitset<32> > > __matrix_c;
        void matrix_a_getTile_bit(int tgTag, int set, int step, bitset<16> matrix_bit[4][4]);
        void matrix_b_getTile_bit(int tgTag, int set, int step, bitset<16> matrix_bit[4][4]);
        void matrix_c_getTile_bit(int tgTag, int set, int step, bitset<32> matrix_bit[4][4]);
        void mma_tile(  bitset<16> matrix_a[4][4], 
                        bitset<16> matrix_b[4][4],
                        bitset<32> matrix_c[4][4],
                        bitset<32> matrix_d[4][4]); 
        void mma_tile_debug(bitset<16> matrix_a[4][4], 
                            bitset<16> matrix_b[4][4],
                            bitset<32> matrix_c[4][4],
                            bitset<32> matrix_d[4][4]); 
        void coordTrans(const char tag, int index, int coord[2]);
        float DotProd(float* a, float* b, float c, int nelem);
        float addTree(float* pre_result, int len);
};

int randint(int min, int max); 
unsigned long floatToFP16(float value);

int main(int argc, char** argv, char** env) {
	VTop dut; 
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC; 
	dut.trace(m_trace, 5); 
	m_trace->open("waveform.vcd"); 
    vluint64_t sim_time = 0; // 用于计数时钟边沿
/*------------------------------------------------------------------------
  TestBench
*------------------------------------------------------------------------*/
    for(int i = 0; i < 10; i++){
        dut.reset = 1;
        dut.clock = 0;
        dut.eval();
        dut.clock = 1;
        dut.eval();
    }
    dut.reset = 0;
    dut.io_out_ready = 1;
    dut.clock = 0;
    dut.eval();
    dut.clock = 1;
    dut.eval();

    dut.io_in_bits_ctrl_mixPcMode = MIXPC? 1 : 0;
    dut.io_in_bits_ctrl_roundingMode = 0;

    uint64_t cycle = 0;
    uint64_t cnt = 0;
    uint64_t error = 0;

    // FIFO pipeline0(8);
    // FIFO pipeline1(8);
    // FIFO pipeline2(8);
    // FIFO pipeline3(8);
    // FIFO pipeline4(8);
    // FIFO pipeline5(8);
    // FIFO pipeline6(8);
    // FIFO pipeline7(8);

    tensor tensor_m16n16k16(16, 16, 16, MIXPC);
    unsigned long dut_matrix_d_ulong[8][MAX_STEP][8];
    unsigned long dut_matrix_d_ulong_next [8][MAX_STEP][8];
    int step = 0;
    int out_step = 0;
    int set = 1;
    int out_set = 1;
    bool exec = true; 
    while (exec){ 
        bool in_valid = (out_set == set) || ((out_set == set - 1) && (out_step > step));
        dut.io_in_valid = in_valid? 1 : 0;
        if((dut.io_in_ready == 1) && (dut.io_in_valid == 1)){
            if(step > (MAX_STEP / 2 - 1)){
                dut.io_in_bits_ctrl_matBSel = 1;
            }else{
                dut.io_in_bits_ctrl_matBSel = 0;
            }
            for(int i = 0; i < 8; ++i){
                switch (i){
                    case 0:{ 
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(0, 0, 0, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(0, 0, 0, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[0][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(0, 0, 0, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc0_ot0_tg0_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc0_ot0_tg0_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc0_ot0_tg0_matrix_c[j] = matrix_c[j];
                        }  
                    }
                        break;
                    case 1:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(0, 0, 4, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(0, 0, 4, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[4][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(0, 0, 4, set, step, 'C', matrix_c);
                        }                
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc0_ot0_tg4_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc0_ot0_tg4_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc0_ot0_tg4_matrix_c[j] = matrix_c[j];
                        }   
                    }                                        
                        break;                        
                    case 2:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(0, 1, 0, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(0, 1, 0, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[1][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(0, 1, 0, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc0_ot1_tg0_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc0_ot1_tg0_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc0_ot1_tg0_matrix_c[j] = matrix_c[j];
                        }                                        
                    }
                        break; 
                    case 3:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(0, 1, 4, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(0, 1, 4, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[5][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(0, 1, 4, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc0_ot1_tg4_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc0_ot1_tg4_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc0_ot1_tg4_matrix_c[j] = matrix_c[j];
                        }  
                    }
                        break;
                    case 4:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(1, 0, 0, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(1, 0, 0, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[2][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(1, 0, 0, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc1_ot0_tg0_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc1_ot0_tg0_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc1_ot0_tg0_matrix_c[j] = matrix_c[j];
                        }
                    }
                        break;
                    case 5:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(1, 0, 4, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(1, 0, 4, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[6][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(1, 0, 4, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc1_ot0_tg4_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc1_ot0_tg4_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc1_ot0_tg4_matrix_c[j] = matrix_c[j];
                        }  
                    }
                        break;
                    case 6:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(1, 1, 0, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(1, 1, 0, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[3][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(1, 1, 0, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc1_ot1_tg0_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc1_ot1_tg0_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc1_ot1_tg0_matrix_c[j] = matrix_c[j];
                        }  
                    }
                        break;
                    case 7:{
                        unsigned long matrix_a[8];
                        unsigned long matrix_b[8];
                        unsigned long matrix_c[8];
                        tensor_m16n16k16.getTile(1, 1, 4, set, step, 'A', matrix_a); 
                        tensor_m16n16k16.getTile(1, 1, 4, set, step, 'B', matrix_b);
                        if(set > 1){
                            for(int j = 0; j < 8; ++j){
                                matrix_c[j] = dut_matrix_d_ulong[7][step][j];
                            }
                        }else{
                            tensor_m16n16k16.getTile(1, 1, 4, set, step, 'C', matrix_c);
                        }
                        for(int j = 0; j < 8; ++j){
                            dut.io_in_bits_tc1_ot1_tg4_matrix_a[j] = matrix_a[j];
                            dut.io_in_bits_tc1_ot1_tg4_matrix_b[j] = matrix_b[j];
                            dut.io_in_bits_tc1_ot1_tg4_matrix_c[j] = matrix_c[j];
                        }   
                    }
                        break;
                    default:
                        break;
                }       
            }
            if(++step == MAX_STEP){
                step = 0;
                if(set == MAX_SET){
                    set = 1;    
                }else{
                    set++;
                }   
            }
        }
        for(int i = 0; i < 2; ++i){
            dut.clock ^= 1;
	        dut.eval(); 
	        m_trace->dump(sim_time);
	        sim_time++;
        }
        cycle ++;

        if(dut.io_out_valid == 1) {         
            for(int i = 0; i < 8; ++i){
                dut_matrix_d_ulong[0][out_step][i] = dut.io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[i];
                dut_matrix_d_ulong[4][out_step][i] = dut.io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[i];
                dut_matrix_d_ulong[1][out_step][i] = dut.io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[i];
                dut_matrix_d_ulong[5][out_step][i] = dut.io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[i];
                dut_matrix_d_ulong[2][out_step][i] = dut.io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[i];
                dut_matrix_d_ulong[6][out_step][i] = dut.io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[i];
                dut_matrix_d_ulong[3][out_step][i] = dut.io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[i];
                dut_matrix_d_ulong[7][out_step][i] = dut.io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[i]; 
            }
            if(++out_step == MAX_STEP){  
                out_step = 0;
                if(out_set == MAX_SET){
                    out_set = 1;
                    exec = false;       
                }else{
                    out_set++;
                }       
            }
        }
        cout << "set: " << set << " cycle: " << cycle <<" step: "<< step << " out_step: " << out_step << " out_set: "<< out_set << endl;  
    }     

    unsigned long ref_matrix_d_ulong[8][MAX_STEP][8];
    tensor_m16n16k16.mma(ref_matrix_d_ulong);
    
    for(int tg = 0; tg < 8; ++tg){
        for(int step = 0; step < MAX_STEP; ++step){ 
            for(int i = 0; i < 8; ++i){
                if(ref_matrix_d_ulong[tg][step][i] != dut_matrix_d_ulong[tg][step][i]){
                    // for(int j = 0; j < 2; ++j){
                    //     dut.clock ^= 1;
	                //     dut.eval(); 
	                //     m_trace->dump(sim_time);
	                //     sim_time++;
                    // }
                    printf("!!!!!! Error !!!!!!\n");
                    tensor_m16n16k16.print();
                    tensor_m16n16k16.mma_debug(tg);
                    for(int m = 0; m < 8; ++m){
                        for(int n = 0; n < MAX_STEP; ++n){
                            printf("\n******* tg%d step%d *******\n", m, n);
                            for(int k = 0; k < 8; ++k){                         
                                printf("|| %lx ", ref_matrix_d_ulong[m][n][k]);
                                if((k == 3)||(k == 7))
                                    printf("\n");
                            }
                        }
                    }
                    printf("cnt: %llu || cycle: %llu || tg: %d || step: %d ||index: %d\n", cnt, cycle, tg, step, i);
                    printf("dut_matrix_d: %lx\n", dut_matrix_d_ulong[tg][step][i]);
                    printf("ref_matrix_d: %lx\n", ref_matrix_d_ulong[tg][step][i]);
                    error ++;
                    m_trace->close();
	                exit(EXIT_SUCCESS);
                    return -1;  
                }
            }                 
        }
    }
    cnt ++;
    cout << "[" << cnt << "]!!!!!! TEST PASS !!!!!!" << endl;
    return 0;
}

/*------------------------------------------------------------------------
  function definition
*------------------------------------------------------------------------*/
int randint(int min, int max){
    random_device seed;
	ranlux48 engine(seed());
    uniform_int_distribution<> distrib(min, max);
    int random = distrib(engine);
    return random;
}

// Float to fp16 conversion function
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
        }else{
            fp16Bits = (sign << 15) | (fp16Exponent << 10) | (((significand >> 13) + 1) & 0x3FF);
        }
    }else{
        // Combine sign, exponent, and significand into fp16 representation
        fp16Bits = (sign << 15) | (fp16Exponent << 10) | (significand >> 13);
    }

    return (static_cast<unsigned long>(-1) >> 16) & static_cast<unsigned long>(fp16Bits);
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

/*------------------------------------------------------------------------
  class fp32
*------------------------------------------------------------------------*/
fp32 :: fp32(){
    int s = randint(0, 1);
    int exp = randint(0, 254);
    int sig = randint(0, (int)(pow(2, 23) - 1));
    bitset<1> sign (s);
    bitset<8> exponent (exp);
    bitset<23> significant (sig);
    __sign = sign;
    __exponent = exponent;
    __significant = significant;
    for(int i = 0; i < 32; ++i){
        if(i < 23 && significant[i]){
            __binary.set(i);
        }else if(i >= 23 && i < 31 && exponent[i - 23]) {
            __binary.set(i);
        }else if(i == 31 && sign[0]){
            __binary.set(i);
        }else{
            __binary.reset(i);
        }
    }
}
fp32 :: fp32(bitset<32> bin){
    __binary = bin;
    bitset<1> sign;
    bitset<8> exponent;
    bitset<23> sig;
    for(int i = 0; i < 32; ++i){
        if(i < 23 && bin[i]){
            sig.set(i);
        }else if(i >= 23 && i < 31 && bin[i]) {
            exponent.set(i - 23);
        }else if(i == 31 && bin[i]){
            sign.set(0);
        }
    }  
    __sign = sign;
    __exponent = exponent;
    __significant = sig;
}
bitset<1> fp32 :: sign(){
    return __sign;
}
bitset<23> fp32 :: sig(){
    return __significant;
}
bitset<8> fp32 :: exp(){
    return __exponent;
}
unsigned long long fp32 :: decimal(){
    return __binary.to_ullong();
} 
bitset<32> fp32 :: binary(){
    return __binary;
}

float fp32 :: todec (){
    bool subnormal = __exponent.none();
    float decSig = subnormal? 0 : 1;
    int expBias = subnormal? 126 : 127;
    int decExp = 0;
    for (int i = 0; i < 23; ++i) {
        decSig = decSig + __significant[i] * pow(2, i - 23);
    }
    for (int i = 0; i < 8; ++i) {
        decExp = decExp + __exponent[i] * pow(2, i);
    }
    // cout << "decSig: " << decSig << '\n';
    // cout << "decExp: " << decExp << '\n';
    float decNum = (__sign[0]? -1 : 1) * decSig * pow(2, decExp - expBias);
    return decNum;
}


/*------------------------------------------------------------------------
  class tensor
*------------------------------------------------------------------------*/
tensor :: tensor(int m, int n, int k, bool mixPc){
    __m = m;
    __n = n;
    __k = k;
    __mixPc = mixPc; 

    vector<vector<bitset<16> > > a(__m, vector<bitset<16> >(__n));
    vector<vector<bitset<16> > > b(__n, vector<bitset<16> >(__k));
    vector<vector<bitset<32> > > c(__m, vector<bitset<32> >(__k)); 

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            fp16 randNumA;
            a[i][j] = randNumA.binary();
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k; ++j){
            fp16 randNumB;
            b[i][j] = randNumB.binary();
        }
    }

    if (!mixPc){
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < k; ++j){
                fp16 randNumC;
                for(int x = 0; x < 16; ++x){
                    if(randNumC.binary()[x]){
                        c[i][j].set(x);
                    }
                }
            }
        }
    }else{
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < k; ++j){
                fp32 randNumC;
                c[i][j] = randNumC.binary();
            }
        }
    }

    __matrix_a = a;
    __matrix_b = b;
    __matrix_c = c;
}

void tensor :: mma(unsigned long ref_matrix_d_ulong[8][MAX_STEP][8]){
    int rows = __mixPc? 2 : 4;
    int cols = 4;
    bitset<32> matrix_d_bit[8][MAX_STEP][4][4];
    for(int set = 1; set <= MAX_SET; ++set){
        for(int step = 0; step < MAX_STEP; ++step){
            for(int tg = 0; tg < 8; ++tg){
                bitset<16> tile_a[4][4];
                bitset<16> tile_b[4][4];
                bitset<32> tile_c[4][4];
                matrix_a_getTile_bit(tg, set, step, tile_a);
                if(step < (MAX_STEP / 2)){
                    if(tg < 4){
                        matrix_b_getTile_bit(tg, set, step, tile_b);
                    }else{
                        matrix_b_getTile_bit(tg - 4, set, step, tile_b);
                    }  
                }else{
                    if(tg < 4){
                        matrix_b_getTile_bit(tg + 4, set, step, tile_b);
                    }else{
                        matrix_b_getTile_bit(tg, set, step, tile_b);
                    }  
                }
                if(set > 1){
                    for(int i = 0; i < rows; ++i){
                        for(int j = 0; j < cols; ++j){
                            tile_c[i][j] = matrix_d_bit[tg][step][i][j];
                        }
                    }
                }else{
                    matrix_c_getTile_bit(tg, set, step, tile_c);
                }
                mma_tile(tile_a, tile_b, tile_c, matrix_d_bit[tg][step]);
            }
        }
    }
    for(int tg = 0; tg < 8; ++tg){
        for(int step = 0; step < MAX_STEP; ++step){
            for(int i = 0; i < 8; ++i){
                int coord[2] = {0, 0};
                coordTrans('c', i, coord);
                int x = coord[0];
                int y = coord[1];
                if(__mixPc){
                    ref_matrix_d_ulong[tg][step][i] = matrix_d_bit[tg][step][x][y].to_ulong();
                }else{
                    bitset<32> fp16comb;
                    bitset<32> hi = matrix_d_bit[tg][step][x][y];
                    bitset<32> lo = matrix_d_bit[tg][step][x][y + 1];
                    for(int j = 0; j < 32; ++j){
                        if(j < 16){
                            if(lo[j]){
                                fp16comb.set(j);
                            }
                        }else{
                            if(hi[j - 16]){
                                fp16comb.set(j);
                            }
                        }
                    }
                    ref_matrix_d_ulong[tg][step][i] = fp16comb.to_ulong();                   
                } 
            }
        }
    }
}

void tensor :: mma_tile(bitset<16> matrix_a[4][4], 
                        bitset<16> matrix_b[4][4],
                        bitset<32> matrix_c[4][4],
                        bitset<32> matrix_d[4][4]){
    int tile_m = __mixPc? 2 : 4;
    int tile_n = 4;
    int tile_k = 4;
    float vec_a[tile_n];
    float vec_b[tile_n];
    float c;

    for(int i = 0; i < tile_m; ++i){
        for(int j = 0; j < tile_k; ++j){
            for(int k = 0; k < tile_n; ++k){
                fp16 a(matrix_a[i][k]);
                fp16 b(matrix_b[k][j]);
                vec_a[k] = a.todec();
                vec_b[k] = b.todec();
                if(__mixPc){
                    fp32 c_32(matrix_c[i][j]);
                    c = c_32.todec();
                }else{
                    bitset<16> c_bin;
                    for(int x = 0; x < 16; ++x){
                        if(matrix_c[i][j][x]){
                            c_bin.set(x);
                        }
                    }
                    fp16 c_16(c_bin);
                    c = c_16.todec();
                }
            }
            float elem_fp = DotProd(vec_a, vec_b, c, tile_n);
            unsigned long elem_ulong;
            if(__mixPc){
                elem_ulong = ((unsigned long*)&elem_fp)[0];
            }else{
                elem_ulong = floatToFP16(elem_fp);
            }
            bitset<32> elem_bit(elem_ulong);
            matrix_d[i][j] = elem_bit;
        }
    }
}

void tensor :: mma_tile_debug(  bitset<16> matrix_a[4][4], 
                                bitset<16> matrix_b[4][4],
                                bitset<32> matrix_c[4][4],
                                bitset<32> matrix_d[4][4]){
    int tile_m = __mixPc? 2 : 4;
    int tile_n = 4;
    int tile_k = 4;
    float vec_a[tile_n];
    float vec_b[tile_n];
    float c;

    cout <<" **********  matrixD  **********"<<endl;
            
    for(int i = 0; i < tile_m; ++i){
        for(int j = 0; j < tile_k; ++j){
            for(int k = 0; k < tile_n; ++k){
                fp16 a(matrix_a[i][k]);
                fp16 b(matrix_b[k][j]);
                vec_a[k] = a.todec();
                vec_b[k] = b.todec();
                if(__mixPc){
                    fp32 c_32(matrix_c[i][j]);
                    c = c_32.todec();
                }else{
                    bitset<16> c_bin;
                    for(int x = 0; x < 16; ++x){
                        if(matrix_c[i][j][x]){
                            c_bin.set(x);
                        }
                    }
                    fp16 c_16(c_bin);
                    c = c_16.todec();
                }
            }
            float elem_fp = DotProd(vec_a, vec_b, c, tile_n);
            printf(" || %f", elem_fp);
    
            unsigned long elem_ulong;
            if(__mixPc){
                elem_ulong = ((unsigned long*)&elem_fp)[0];
            }else{
                elem_ulong = floatToFP16(elem_fp);
            }
            bitset<32> elem_bit(elem_ulong);
            matrix_d[i][j] = elem_bit;
        }
        printf("\n||********** %d **********||\n", i);
    }
}

void tensor :: mma_debug(int tg){
    int _m = __mixPc? 2 : 4;
    int _n = 4;
    int _k = 4;
    bitset<32> matrix_d_bit[MAX_STEP][4][4];
    for(int set = 1; set <= MAX_SET; ++set){
        for(int step = 0; step < MAX_STEP; ++step){
            bitset<16> tile_a[4][4];
            bitset<16> tile_b[4][4];
            bitset<32> tile_c[4][4];
            matrix_a_getTile_bit(tg, set, step, tile_a);
            if(step < (MAX_STEP / 2)){
                if(tg < 4){
                    matrix_b_getTile_bit(tg, set, step, tile_b);
                }else{
                    matrix_b_getTile_bit(tg - 4, set, step, tile_b);
                }  
            }else{
                if(tg < 4){
                    matrix_b_getTile_bit(tg + 4, set, step, tile_b);
                }else{
                    matrix_b_getTile_bit(tg, set, step, tile_b);
                }  
            }
            if(set > 1){
                for(int i = 0; i < _m; ++i){
                    for(int j = 0; j < _k; ++j){
                        tile_c[i][j] = matrix_d_bit[step][i][j];
                    }
                }
            }else{
                matrix_c_getTile_bit(tg, set, step, tile_c);
            }
            printf("\n-------------------------------\n");
            printf("tg: %d set: %d step: %d\n", tg, set, step);
            cout <<" **********  matrixA  **********"<<endl;
            for(int i = 0; i < _m; ++i){
                for(int j = 0; j < _n; ++j){
                    unsigned long elem = tile_a[i][j].to_ulong();
                    printf(" || %lx", elem);
                }
                printf("\n||********** %d **********||\n", i);
            }
            cout <<" **********  matrixB  **********"<<endl;
            for(int i = 0; i < _n; ++i){
                for(int j = 0; j < _k; ++j){
                    unsigned long elem = tile_b[i][j].to_ulong();
                    printf(" || %lx", elem);
                }
                printf("\n||********** %d **********||\n", i);
            }
            cout <<" **********  matrixC  **********"<<endl;
            for(int i = 0; i < _m; ++i){
                for(int j = 0; j < _k; ++j){
                    unsigned long elem = tile_c[i][j].to_ulong();
                    printf(" || %lx", elem);
                }
                printf("\n||********** %d **********||\n", i);
            }
            mma_tile_debug(tile_a, tile_b, tile_c, matrix_d_bit[step]);
        }
    }
}

void tensor :: print(){
    cout <<" **********  matrixA  **********"<<endl;
    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __n; ++j){
            unsigned long elem = __matrix_a[i][j].to_ulong();
            printf(" || %lx", elem);
        }
        printf("\n||********** %d **********||\n", i);
    }
    cout <<" **********  matrixB  **********"<<endl;
    for(int i = 0; i < __n; ++i){
        for(int j = 0; j < __k; ++j){
            unsigned long elem = __matrix_b[i][j].to_ulong();
            printf(" || %lx", elem);
        }
        printf("\n||********** %d **********||\n", i);
    }
    cout <<" **********  matrixC  **********"<<endl;
    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __k; ++j){
            unsigned long elem = __matrix_c[i][j].to_ulong();
            printf(" || %lx", elem);
        }
        printf("\n||********** %d **********||\n", i);
    } 
    cout <<" **********  matrixD  **********"<<endl;
    float vec_a[__n];
    float vec_b[__n];
    float c = 0;

    for(int i = 0; i < __m; ++i){
        for(int j = 0; j < __k; ++j){
            for(int k = 0; k < __n; ++k){
                fp16 a(__matrix_a[i][k]);
                fp16 b(__matrix_b[k][j]);
                vec_a[k] = a.todec();
                vec_b[k] = b.todec();
            }
            if(__mixPc){
                fp32 c_32(__matrix_c[i][j]);
                c = c_32.todec();
            }else{
                bitset<16> c_bin;
                for(int x = 0; x < 16; ++x){
                    if(__matrix_c[i][j][x]){
                        c_bin.set(x);
                    }
                }
                fp16 c_16(c_bin);
                c = c_16.todec();
            }
            float elem_fp = DotProd(vec_a, vec_b, c, __n);
            unsigned long elem_ulong_fp16 = floatToFP16(elem_fp);
            printf(" || %lx", elem_ulong_fp16);
        }
        printf("\n||********** %d **********||\n", i);
    } 
}

float tensor :: DotProd(float* a, float* b, float c, int nelem){
    float mul_result[nelem];
    int next_nelem = nelem - nelem / 2;
    for(int i = 0; i < nelem; ++i){
        mul_result[i] = a[i] * b[i];
    }
    float dpResult = addTree(mul_result, nelem);
    return dpResult + c; 
}

float tensor :: addTree(float* pre_result, int len){
    if(len == 2){
        return pre_result[0] + pre_result[1]; 
    }else{
        int next_len = len - len / 2;
        float addResult[next_len];
        for(int i = 0; i <= len / 2; ++i){
            if(i < (len / 2)){
                addResult[i] = pre_result[2 * i] + pre_result[2 * i + 1];
            }else if(len % 2 == 1){
                addResult[i] = pre_result[len - 1];
            }

        }
        if(next_len == 2){
            return addResult[0] + addResult[1];
        }else{
            return addTree(addResult, next_len);
        }
    }   
}
 
void tensor :: coordTrans(const char tag, int index, int coord[2]){
    int rows = 0;
    int cols = 0;
    switch (tag)
    {
    case 'a':
        rows = __mixPc? 2 : 4;
        cols = 4;
        coord[0] = rows - 1 - index / (cols / 2);
        coord[1] = cols - 2 - (index % (cols / 2)) * 2;
        break;
    case 'b':
        rows = 4;
        cols = 4;
        coord[0] = rows - 1 - index / (cols / 2);
        coord[1] = cols - 2 - (index % (cols / 2)) * 2;
        break;
    case 'c':
        rows = __mixPc? 2 : 4;
        cols = 4;
        if(__mixPc){
            coord[0] = rows - 1 - index / cols;
            coord[1] = cols - 1 - index % cols;
        }else{
            coord[0] = rows - 1 - index / (cols / 2);
            coord[1] = cols - 2 - (index % (cols / 2)) * 2;
        }
        break;
    default:
        cout << "!!!! tag error !!!!" << endl;
        break;
    }
}

void tensor :: getTile(int tcNo, int otNo, int tgNo, 
                        int set, int step, char matrixTag, 
                        unsigned long mat_ulong[8]){
    int rows = __mixPc? 2 : 4;
    int otTag = tcNo * 2 + otNo;
    int tgTag = otTag + tgNo;
    switch (matrixTag){
        case 'A':{
            bitset<16> matrix_a_bit[4][4];
            matrix_a_getTile_bit(tgTag, set, step, matrix_a_bit);
            for(int i = 0; i < 8; ++i){
                if((i > 3) && __mixPc){
                    mat_ulong[i - 4] = 0;
                }else{
                    bitset<32> fp16comb;
                    int coord[2] = {0, 0};
                    coordTrans('a', i, coord);
                    int x = coord[0];
                    int y = coord[1];
                    bitset<16> hi = matrix_a_bit[x][y];
                    bitset<16> lo = matrix_a_bit[x][y + 1];
                    for(int j = 0; j < 32; ++j){
                        if(j < 16){
                            if(lo[j]){
                                fp16comb.set(j);
                            }
                        }else{
                            if(hi[j - 16]){
                                fp16comb.set(j);
                            }
                        }
                    }
                    if(__mixPc){
                        mat_ulong[i + 4] = fp16comb.to_ulong();
                    }else{
                        mat_ulong[i] = fp16comb.to_ulong();
                    }
                }
            }
        }  
            break;
        case 'B':{
            bitset<16> matrix_b_bit[4][4];
            matrix_b_getTile_bit(tgTag, set, step, matrix_b_bit);
            for(int i = 0; i < 8; ++i){
                bitset<32> fp16comb;
                int coord[2] = {0, 0};
                coordTrans('b', i, coord);
                int x = coord[0];
                int y = coord[1];
                bitset<16> hi = matrix_b_bit[x][y];
                bitset<16> lo = matrix_b_bit[x][y + 1];
                for(int j = 0; j < 32; ++j){
                    if(j < 16){
                        if(lo[j]){
                            fp16comb.set(j);
                        }
                    }else{
                        if(hi[j - 16]){
                            fp16comb.set(j);
                        }
                    }
                }
                mat_ulong[i] = fp16comb.to_ulong();
            } 
        }
            break;
        case 'C':{
            bitset<32> matrix_c_bit[4][4];
            matrix_c_getTile_bit(tgTag, set, step, matrix_c_bit);
            for(int i = 0; i < 8; ++i){
                if(__mixPc){
                    bitset<32> fp32bin;
                    int coord[2] = {0, 0};
                    coordTrans('c', i, coord);
                    int x = coord[0];
                    int y = coord[1];
                    fp32bin = matrix_c_bit[x][y];
                    mat_ulong[i] = fp32bin.to_ulong();
                }else{
                    bitset<32> fp16comb;
                    int coord[2] = {0, 0};
                    coordTrans('c', i, coord);
                    int x = coord[0];
                    int y = coord[1];
                    bitset<32> hi = matrix_c_bit[x][y];
                    bitset<32> lo = matrix_c_bit[x][y + 1];
                    for(int j = 0; j < 32; ++j){
                        if(j < 16){
                            if(lo[j]){
                                fp16comb.set(j);
                            }
                        }else{
                            if(hi[j - 16]){
                                fp16comb.set(j);
                            }
                        }
                    }
                    mat_ulong[i] = fp16comb.to_ulong();
                }
            }
        }
            break;
        default:
            break;
    }
}

void tensor :: matrix_a_getTile_bit(int tgTag, int set, int step, bitset<16> matrix_bit[4][4]){
    int rows = __mixPc ? 2 : 4;
    int cols = 4;
    int row_lo = 0;
    int col_lo = 0;
    switch (tgTag){
        case 0 :
        case 2 : 
            row_lo = 0;
            break;
        case 4 :
        case 6 :
            row_lo = 4;
            break;
        case 1 :
        case 3 :
            row_lo = 8;
            break;
        case 5 :
        case 7 :
            row_lo = 12;
            break;
        default:
            break;
    }
    switch (set){
        case 1 :
            col_lo = 0;
            break;
        case 2 :
            col_lo = 4;
            break;
        case 3 :
            col_lo = 8;
            break;
        case 4 :
            col_lo = 12;
            break;
        default:
            break;
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            int x = __mixPc? (row_lo + (step % 2) * 2 + i) : (row_lo + i);
            int y = col_lo + j;
            matrix_bit[i][j] = __matrix_a[x][y];
        }
    }
}

void tensor :: matrix_b_getTile_bit(int tgTag, int set, int step, bitset<16> matrix_bit[4][4]){
    int rows = 4;
    int cols = 4;
    int row_lo = 0;
    int col_lo = 0;
    switch (tgTag){
        case 0 :
        case 1 : 
            col_lo = 0;
            break;
        case 4 :
        case 5 :
            col_lo = 4;
            break;
        case 2 :
        case 3 :
            col_lo = 8;
            break;
        case 6 :
        case 7 :
            col_lo = 12;
            break;
        default:
            break;
    }
    switch (set){
        case 1 :
            row_lo = 0;
            break;
        case 2 : 
            row_lo = 4;
            break;
        case 3 :
            row_lo = 8;
            break;
        case 4 :
            row_lo = 12;
            break;
        default:
            break;
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            int x = row_lo + i;
            int y = col_lo + j;
            matrix_bit[i][j] = __matrix_b[x][y];
        }
    }               
}

void tensor :: matrix_c_getTile_bit(int tgTag, int set, int step, bitset<32> matrix_bit[4][4]){
    int rows = __mixPc ? 2 : 4;
    int cols = 4;
    int row_lo = 0;
    int col_lo = 0;
    switch (tgTag){
        case 0 :
            row_lo = 0;
            col_lo = 0;
            break;
        case 2 : 
            row_lo = 0;
            col_lo = 8;           
            break;
        case 4 :
            row_lo = 4;
            col_lo = 0;
            break;                
        case 6 :
            row_lo = 4;
            col_lo = 8;
            break;
        case 1 :
            row_lo = 8;
            col_lo = 0;
            break;                
        case 3 :               
            row_lo = 8;
            col_lo = 8;
            break;
        case 5 :
            row_lo = 12;
            col_lo = 0;
        case 7 :
            row_lo = 12;
            col_lo = 8;
            break;
        default:
            break;
    }
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            int y_bias = (step < (MAX_STEP / 2))? 0 : 4;
            int x = __mixPc? (row_lo + i + (step % 2) * 2) : (row_lo + i);
            int y = col_lo + j + y_bias;
            matrix_bit[i][j] = __matrix_c[x][y];
        }
    }
}

/*------------------------------------------------------------------------
  class FIFO
*------------------------------------------------------------------------*/
FIFO :: FIFO(int size){
    __dataQueue = new matrix[size];
    __maxaddr = __dataQueue + size; 
    __ptr_rd = __dataQueue;
    __ptr_wr = __dataQueue;
}

bool FIFO :: isEmpty(){
    return __ptr_rd == __ptr_wr;
}

bool FIFO :: isFull(){
    matrix* ptr_wr_next;
    if(__ptr_wr == __maxaddr){
        ptr_wr_next = __dataQueue;
    }else{
        ptr_wr_next = __ptr_wr + 1;
    }
    return ptr_wr_next == __ptr_rd;
}

void FIFO :: write( vector<vector<float> > a,
                    vector<vector<float> > b,
                    vector<vector<float> > c,
                    vector<vector<unsigned long> > d){
    if(isFull()){
        cout << "!!!!! FIFO WRITE ERROR !!!!!" << endl;
    }else{
        matrix data;
        data.a = a;
        data.b = b;
        data.c = c;
        data.d = d;
        * __ptr_wr = data;
        if(__ptr_wr == __maxaddr) {
            __ptr_wr = __dataQueue;
        }else{
            __ptr_wr ++;
        } 
    }
}

matrix FIFO :: read(){
    matrix data;
    data = * __ptr_rd;
    if(isEmpty()){
        cout << "!!!!! FIFO READ ERROR !!!!!" << endl;
    }else{
        if(__ptr_rd == __maxaddr) {
            __ptr_rd = __dataQueue;
        }else{
            __ptr_rd ++;
        } 
    }
    return data;
}
