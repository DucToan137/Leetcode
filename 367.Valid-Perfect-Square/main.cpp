#include<iostream>
#include<cmath>

using namespace std;

bool isPerfectSquare(int num) {
    if (num < 2)
        return true;
    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0 && (i * i) == num) {
            return true;
        }
    }
    return false;
}

int main() {

	int num = 16;
	cout << isPerfectSquare(num) << endl;

	return 0;
}