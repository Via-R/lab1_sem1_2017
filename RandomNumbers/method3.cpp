#include "functions.h"
#include <ctime>

unsigned int x3 = time(0);
unsigned int y3 = time(0) / 2;

unsigned int method3() {
	y3 = x3;
	x3 = (x3 + y3) % m;
	return x3;
}

double get3() {
	return (double)method3() / m;
}