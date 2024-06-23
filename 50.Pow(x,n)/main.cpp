#include<iostream>
#include<iomanip>
using namespace std;

double myPow(double x, int n) {
	// Solution 1
	//if (n == 0) {
	//	return 1.0;
	//}
	//if (n == 1) {
	//	return x;
	//}
	//if (n == -1) {
	//	return 1 / x;
	//}

	//double half = myPow(x, n / 2);

	//if (n % 2 == 0) {
	//	return half * half;
	//}
	//else {
	//	return x * half * half;
	//}

	// Solution 2
	if (n < 0) {
		x = 1 / x;
	}

	long num = labs(n);

	double pow = 1;

	while (num) { 
		if (num & 1) { 
			pow *= x;
		}

		x *= x;
		num >>= 1;
	}

	return pow;

}

int main() {

	double x = 2.00000;
	int n = 10;
	cout << myPow(x, n) << "\n";

	double x1 = 2.10000;
	int n1 = 3;
	cout << myPow(x1, n1) << "\n";

	double x2 = 2.00000;
	int n2 = -2;
	cout << myPow(x2, n2) << "\n";

	double x3 = 34.00515;
	int n3 = -3;
	cout <<  myPow(x3, n3) << "\n";



	return 0;
}