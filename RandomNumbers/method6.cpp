#include <iostream>
#include "functions.h"
#include <ctime>

double x6 = time(0);
double sum = 0;

double method6() {
	sum = 0;
	for (int i = 0; i < 12; i++) {
		double temp = get4();
		sum += temp;
	}
	return sum-3;
}
