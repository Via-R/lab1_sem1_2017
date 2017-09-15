#include <iostream>
#include "functions.h"
#include <ctime>
#include <cmath>

double method7() {
	bool ready = false;
	double second = 0.0;

	if (ready) {
		ready = false;
		return second + 3;
	}
	else {
		double u, v, s;
		do {
			u = 2.0 * get4() - 1.0;
			v = 2.0 * get1() - 1.0;
			s = u * u + v * v;
		} while (s > 1.0 || s == 0.0);

		double r = sqrt(-2.0 * log(s) / s);
		second = r * u;
		ready = true;
		return r * v + 3;
	}
}