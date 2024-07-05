#include<iostream>
#include<string>

using namespace std;

string replaceDigits(string s) {
	string res = "";

	for (int i = 0; i < s.size(); ++i) {
		if (isalpha(s[i])) {
			res += s[i];
		}
		else {
			res += (char)(s[i - 1] + (s[i] - '0'));
		}
	}

	return res;
}

int main() {

	string s = "a2c1e1";
	cout << replaceDigits(s) << endl;

	return 0;
}