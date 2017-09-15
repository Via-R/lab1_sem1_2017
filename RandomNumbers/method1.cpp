#include "functions.h"
#include <ctime>

unsigned int x1 = time(0);

unsigned int method1() {
	x1 = (84589 * x1+ 45989) % m;
	return x1;
}

double get1() {
	return (double)method1() / m;
}