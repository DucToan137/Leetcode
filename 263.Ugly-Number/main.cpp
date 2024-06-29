#include<iostream>

using namespace std;

bool isUgly(int n) {

    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;

        }
        else if (n % 3 == 0) {
            n = n / 3;

        }
        else if (n % 5 == 0) {
            n = n / 5;

        }
        else {
            break;
        }
    }
    return n == 1;
}

int main() {

	int n = 7;
	cout << isUgly(n) << endl;

	return 0;
}