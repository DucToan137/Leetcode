#include<iostream>

using namespace std;


int sumOfMultiples(int n) {
	int res = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 || i % 7 == 0 || i % 5 == 0) {
			res += i;
		}
	}

	return res;
}

int main() {

	int n = 7;
	cout << sumOfMultiples(n) << endl;

	return 0;
}