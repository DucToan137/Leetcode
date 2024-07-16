#include<iostream>
#include<string>
using namespace std;

int countDigit(int n) {
	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}
	return count;
}

bool isSymmetric(int n) {
	string temp = to_string(n);
	
	if (temp.length() % 2 != 0) {
		return false;
	}

	int left = 0;
	int right = 0;

	for (int i = 0; i < temp.length() / 2; i++) {
		left += temp[i] - '0';
		right += temp[temp.length() - i - 1] - '0';
	}

	if(left != right) {
		return false;
	}

	return true;
}


int countSymmetricIntegers(int low, int high) {
	int count = 0;
	for(int i=low; i<=high; i++) {
		if (isSymmetric(i)) {
			count++;
		}
	}

	return count;
}


int main() {

	cout << countSymmetricIntegers(1200, 1230) << endl;

	return 0;
}