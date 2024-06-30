#include<iostream>
#include<string>

using namespace std;

string addStrings(string num1, string num2) {
	int n1 = num1.length();
	int  n2 = num2.length();
	int  nho = 0;
	int  tong = 0;
	int  i = 0;

	if (n1 > n2) {
		num2.insert(0, n1 - n2, '0');
	}
	if (n1 < n2) {
		num1.insert(0, n2 - n1, '0');
	}

	string result = "";
	result = num1;

	for (i = num1.length() - 1; i >= 0; i--) {
		tong = (num1[i] - '0') + (num2[i] - '0') + nho;
		nho = tong / 10;
		tong = tong % 10;
		result[i] = tong + '0';
	}

	if (nho > 0) {
		result.insert(0, 1, nho + '0');
	}


	return result;
}

int main() {

	string num1 = "123";
	string num2 = "11";

	cout << addStrings(num1, num2) << endl;

	return 0;
}