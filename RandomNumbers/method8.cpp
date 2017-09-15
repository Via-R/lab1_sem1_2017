#define _USE_MATH_DEFINES
#include <iostream>
#include "functions.h"
#include <ctime>
#include <cmath>

double method8() {
	double x8, u, v;
	do {
		u = get5();
		v = get2();
		x8 = sqrt(8.0 / M_E)*(v - 0.5) / u;
		if (x8 * x8 <= 5 - 4 * pow(M_E, 0.25) * u)
			return x8 + 3;
	} while (( x8 * x8 < 4.0 * pow(M_E, -1.35) / u + 1.4 ) || ( x8 * x8 > -4.0*log(u) ));
	return x8 + 3;
}