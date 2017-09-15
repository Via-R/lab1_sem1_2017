#define _USE_MATH_DEFINES
#include <iostream>
#include "functions.h"
#include <ctime>
#include <cmath>

double x10;

double method10() {
	unsigned int a = time(0);
	double u, y;
	do {
		u = get2();
		y = tan(M_PI * u);
		x10 = sqrt(2.0 * a - 1) * y + a - 1;
	} while ( x10 <= 0 || get2() > (1 + y * y) * exp((a - 1) * log(x10 / (a - 1)) - sqrt(2 * a - 1) * y));
	
	return x10;
}