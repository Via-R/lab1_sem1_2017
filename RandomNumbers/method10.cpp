#define _USE_MATH_DEFINES
#include <iostream>
#include "functions.h"
#include <ctime>
#include <cmath>

double x10;

double method10() {
	unsigned int a = 1;
	double u, y, v;
	do {
		u = get4();
		y = tan(M_PI * u);
		x10 = sqrt(2.0 * a - 1) * y + a - 1;
		v = get4();
	} while ( x10 <= 0 || v > (1.0 + y * y) * exp((a - 1.0) * log(x10 / (a - 1.0)) - sqrt(2.0 * a - 1.0) * y));
	
	return x10;
}

