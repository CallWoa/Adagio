#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <random>
#include <bitset>
// #include "VDotProdUnit.h"
// #include "verilated.h"
using namespace std;

int randint(); 
float randfp16 ();
float bin2float(const char* binary);

// vluint64_t sim_time = 0; // 用于计数时钟边沿
// int main(int argc, char **argv, char **env) {
//     Verilated::commandArgs(argc, argv);
//     Vb11* top = new Vb11;
    
//     while (sim_time <= 10)
//     { 
//         top->clock ^= 1;
//         if(sim_time < 3){
//             top->reset = 1;
//         }else{
//             top->reset = 0;
//         }
//         printf("clock = %d reset = %d sim_time = %d\n", top->clock,top->reset,sim_time);
//         top->eval(); 
//         sim_time++;
//     }
//     exit(0);
// }

int main() {
    for (int i = 0; i < 10; ++i){
        // int random = randint();
        // cout << "二进制： " << bitset< sizeof(random)*8 >(random) << endl;
        float random = randfp16();
        cout << "random(decimal): " << random << "\n//*********************//" << endl;
        // printf("random: %d \n", random);
    }
    return 0;
}

int randint(int min, int max){
    random_device seed;//硬件生成随机数种子
	ranlux48 engine(seed());//利用种子生成随机数引擎
    uniform_int_distribution<> distrib(min, max);//设置随机数范围，并为均匀分布
    int random = distrib(engine);//随机数
    return random;
}

float randfp16 (){
    int randsign = randint(0, 1);
    int randexp = randint(0, 31);
    int randsig = randint(0, 1023);
    bitset<1> sign (randsign);
    bitset<5> exponent (randexp);
    bitset<10> sig (randsig);
    cout << "sign: " << sign << '\n';
    cout << "exp: " << exponent << '\n';
    cout << "sig: " << sig << '\n';
    float decSig = 1;
    int decExp = 0;
    for (int i = 0; i < 10; ++i) {
        decSig = decSig + sig[i] * pow(2, i - 10);
    }
    for (int i = 0; i < 5; ++i) {
        decExp = decExp + exponent[i] * pow(2, i);
    }
    cout << "decSig: " << decSig << '\n';
    cout << "decExp: " << decExp << '\n';
    float decNum = (sign[0]? -1 : 1) * decSig * pow(2, decExp - 15);
    return decNum;
}

float bin2float(const char* binary){
    float value;
    memcpy(&value, binary, sizeof(float));
    return value;
}