#include<iostream>

using namespace std;

bool isPowerOfThree(int n) {
	if(n == 0) {
		return false;
	}
	if(n== 1) {
		return true;
	}
	if(n % 3 != 0) {
		return false;
	}
	return isPowerOfThree(n / 3);
}

int main() {

	int n = 0;
	cout << isPowerOfThree(n) << "\n";

	return 0;
}