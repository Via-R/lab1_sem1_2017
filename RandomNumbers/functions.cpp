#include <iostream>
#include <iomanip>
#include "functions.h"
//Comment
using namespace std;
unsigned int x = 42;
unsigned int y = 8;

int a = 1;
int b = 100;
int parts = 1;

void analyze(FP f, unsigned int iterations, int type) {
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
		for (int i = 0; i < iterations; i++)
			cout << f() << endl;//result[(int)(f())]++;

	double from, to;
	from = (double)a;
	for (int i = 0; i < size; i++) {
		char segmentEnd = i + 1 == size ? ']' : ')';
		to = 1. / parts + from;
		cout << "[ " << fixed << setprecision(2) << from << ", " << to << " " << segmentEnd << ":  \t";
		cout.unsetf(std::ios_base::floatfield);
		cout.precision(ss);
		cout << *(result + i) / (double)iterations * 100 << "\t%" << endl;
		from = to;
	}
}

//cout << f()*(b-a) + a << endl;
//cout << f() << endl;
