#include<iostream>

using namespace std;

int addDigits(int num) {
	int res = 0;

	while (num > 0) {
		res += num % 10;
		num /= 10;
		if (num == 0 && res > 9) {
			num = res;
			res = 0;
		}
	}

	return res;
}

int main() {

	int num = 38;
	cout << addDigits(num) << endl;

	return 0;
}