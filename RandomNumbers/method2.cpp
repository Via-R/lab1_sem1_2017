#include "functions.h"
#include <ctime>

unsigned long long x2 = time(0);

unsigned int method2() {
	x2 = (7 * x2 * x2 + 5 * x2 + 17) % m;
	return x2;
}

double get2() {
	return (double)method2() / m;
}