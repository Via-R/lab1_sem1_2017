#include <iostream>
#include <iomanip>

const unsigned int m = 1000003;//123867;//217728;
typedef double(*FP)();
typedef double(*FPP)(FP);
//(ax + c) % m
unsigned int method1();
double get1();

//(dx^2 + ax + c) % m
unsigned int method2();
double get2();

//Fibonacci
unsigned int method3();
double get3();

//Inverse
unsigned int method4();
double get4();

//Asociative
unsigned int method5();
double get5();

//Three sigmas
double method6();

//Polar coordinates
double method7();

//Correlative
double method8();

//Logarithm method
double method9();

//Gamma
double method10();

//template <typename T>
void analyze(FP, unsigned int, int);
