#include<iostream>

using namespace std;

int giaTri(char c) {
	switch (c) {
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
}

int romanToInt(string s) {
	int res = 0;

	for(int i=s.size()-1;i>=0;i--) {
		if (i == 0) {
			res += giaTri(s[i]);
			break;
		}
		if (giaTri(s[i]) > giaTri(s[i - 1])) {
			res += giaTri(s[i]) - giaTri(s[i - 1]);
			i--;
		}
		else {
			res += giaTri(s[i]);
		}
	}

	return res;
}

int main() {

	string s = "III";
	string s1 = "IV";
	string s2 = "IX";
	string s3 = "LVIII";
	string s4 = "MCMXCIV";

	cout << romanToInt(s) << "\n";
	cout << romanToInt(s1) << "\n";
	cout << romanToInt(s2) << "\n";
	cout << romanToInt(s3) << "\n";
	cout << romanToInt(s4);



	return 0;
}