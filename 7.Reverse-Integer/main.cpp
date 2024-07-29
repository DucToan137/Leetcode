#include<iostream>
#include<string>
#include<string.h>

using namespace std;

string daoChuoi(string s) {
	string result = "";
	for (int i = s.length() - 1; i >= 0; i--) {
		result += s[i];
	}
	return result;
}

int reverse(int x) {

	if (x == 0) return 0;

	if (x < 0) {
		string s = to_string(x);
		string s1 = s.substr(1);
		s1 = daoChuoi(s1);
		s1 = "-" + s1;
		long long result = stoll(s1);
		if (result < INT_MIN) return 0;
		return result;
	}
	else {
		string s = to_string(x);
		s = daoChuoi(s);
		long long result = stoll(s);
		if (result > INT_MAX) return 0;
		return result;
	}
}

int main() {

	int x = -120;
	cout << reverse(x) << "\n";

	return 0;
}