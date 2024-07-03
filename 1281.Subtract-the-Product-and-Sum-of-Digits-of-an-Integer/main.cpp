#include<iostream>

using namespace std;

int subtractProductAndSum(int n) {
	int res;
	int tich = 1;
	int tong = 0;
	while (n > 0) {
		int temp = n % 10;
		tich *= temp;
		tong += temp;
		n /= 10;
	}
	res = tich - tong;
	return res;
}

int main() {

	int n = 234;
	cout << subtractProductAndSum(n) << endl;

	return 0;
}