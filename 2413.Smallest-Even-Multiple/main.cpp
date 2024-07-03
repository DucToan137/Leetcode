#include<iostream>
#include<numeric>

using namespace std;

int smallestEvenMultiple(int n) {
	if (n % 2 != 0) {
		return n * 2;
	}
	else {
		return n;
	}
}

int main() {

	int n = 6;
	cout << smallestEvenMultiple(n) << endl;

	return 0;
}