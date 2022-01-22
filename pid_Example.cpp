#include "pid.h"
#include <stdio.h>
#include<iostream>
using namespace std;
#include<iomanip>

int main() {

	PID pid = PID(0.1, 100, -100, 0.1, 0.01, 0.5);

	double val = 20;
	for (int i = 0; i < 1000; i++) 
	{
		double inc = pid.calculate(0, val);
		//printf("val:% 7.3f inc:% 7.3f\n", val, inc);
		cout << "µÚ" << i << "´Î£º " << "val:" << setprecision(2) << val << " inc" << setprecision(2) << inc << endl;
		val += inc;
	}
	system("pause");

	return 0;
}