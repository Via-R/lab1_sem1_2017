#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

int main() {
	int choice;
	const int MAX_CH = 10;
	
	const FP ar[10] = { &get1, &get2, &get3, &get4, &get5, &method6, &method7, &method8, &method9, &method10 };

	cout << "Generators of pseudo random numbers\n\n1: Linear congruential\n2: Quadratic congruential\n3: Fibonacci\n4: Inverse congruential\n5: Associative\n6: 3 sigmas\n7: Polar coordinates\n8: Correlative\n9: Logarithmic\n10: Ahrens' gamma distribution\n\nPlese enter number of method you'd like to try: ";
	cin >> choice;
	if (cin.fail() || choice < 1 || choice > 10) {
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		choice = -1;
	}
	if (choice != -1) {
		if (choice < 6)
			analyze(ar[choice - 1], 10000, 0);
		else if (choice < 9)
			analyze(ar[choice - 1], 10000, 1);
		else
			analyze(ar[choice - 1], 10000, 2);
	}
	else
		cout << "Wrong number entered\n";
	system("pause");
	return 0;
}