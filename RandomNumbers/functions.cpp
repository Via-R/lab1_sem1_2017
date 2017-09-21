#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;
unsigned int x = 42;
unsigned int y = 8;

int a = 1;
int b = 100;
int parts = 1;

void analyze(FP f, unsigned int iterations, int type) {
	if (type == 0) {
		a = 0;
		b = 1;
		parts = 10;
	}
	else if (type == 1) {
		a = -3;
		b = 3;
		parts = 4;
	}
	else {
		a = 1;
		b = 100;
		parts = 1;
	}
	streamsize ss = cout.precision();
	const int size = (b - a) * parts;
	int * result = new int[size]();

	int temp;
	if (type == 0)
		for (int i = 0; i < iterations; i++)
			result[(int)(f() * size)]++;

	else if (type == 1)
		for (int i = 0; i < iterations; i++) {
			temp = (int)(f() / 6 * size);
			if (temp >= size || temp < 0)
				continue;
			else {
				result[temp]++;
			}
		}
	else
		for (int i = 0; i < iterations; i++) {
			int temp = (int)f();
			if (temp >= size || temp < 0)
				continue;
			result[temp]++;
		}

	double from, to;
	from = (double)a;
	double summary = 0.0;
	for (int i = 0; i < size; i++) {
		char segmentEnd = i + 1 == size ? ']' : ')';
		to = 1. / parts + from;
		cout << "[ " << fixed << setprecision(2) << from << ", " << to << " " << segmentEnd << ":  \t";
		cout.unsetf(std::ios_base::floatfield);
		cout.precision(ss);
		cout << *(result + i) / (double)iterations * 100 << "\t%" << endl;
		summary += *(result + i) / (double)iterations * 100;
		from = to;
	}
	cout << summary << endl;

}
