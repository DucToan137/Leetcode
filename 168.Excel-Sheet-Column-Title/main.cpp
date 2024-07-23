#include<iostream>
#include<string>

using namespace std;

char ntToChar(int n) {
	return 'A' + n - 1;
}

string convertToTitle(int columnNumber) {
	string res = "";

	while (columnNumber > 0) {
		int rem = columnNumber % 26;
		if (rem == 0) {
			res = 'Z' + res;
			columnNumber = columnNumber / 26 - 1;
		}
		else {
			res = ntToChar(rem) + res;
			columnNumber = columnNumber / 26;
		}
	}

	return res;
}

int main() {

	int columnNumber = 27;
	cout << ntToChar(columnNumber) << "\n";
	cout << convertToTitle(columnNumber) << "\n";
	return 0;
}