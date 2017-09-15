#include "functions.h"
#include <ctime>

unsigned int x4 = time(0);

long long inverse(long long b) {
	long long ex = m - 2;
	if (b == 1)return 1;
	long long r = 1;
	while (ex) {
		if (ex & 1)r = (r * b) % m;
		ex = ex >> 1;
		b = (b * b) % m;
	}
	return r;
}

unsigned int method4() {
	x4 = (5 * inverse(x4) + 2) % m;
	return x4;
}

double get4() {
	return (double)method4() / m;
}