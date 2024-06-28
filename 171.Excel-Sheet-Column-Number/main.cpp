#include<iostream>

using namespace std;

int CharToInt(char c) {
	return c - 'A' + 1;
}

int titleToNumber(string columnTitle) {
	int res = 0;

	for (int i = 0; i < columnTitle.size(); i++) {
		res = res * 26 + CharToInt(columnTitle[i]);
	}

	return res;
}

int main() {
	string columnTitle = "ZY";
	cout << titleToNumber(columnTitle) << endl;

	return 0;
}