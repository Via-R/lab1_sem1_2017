#include "functions.h"
#include <ctime>

unsigned int x2 = time(0);

unsigned int method2() {
	x2 = (987 * x2 * x2 + 1597 * x2 + 45989) % m;
	return x2;
}

double get2() {
	return (double)method2() / m;
}