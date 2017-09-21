#include "functions.h"
#include <ctime>

unsigned int x5 = time(0);
unsigned int y5 = time(0) / 2;

unsigned int method5() {
	x5 = method4();
	y5 = method1();
	return (unsigned int)(x5 + m - y5) % m;
}

double get5() {
	return (double)method5() / m;
}