#include<iostream>

using namespace std;

string makeSmallestPalindrome(string s) {

	int i = 0;
	int j = s.size() - 1;

	while (i < j) {
		if (s[i] != s[j]) {
			if (s[i] < s[j]) {
				s[j] = s[i];
			}
			else {
				s[i] = s[j];
			}
		}
		++i;
		--j;
	}
	return s;
}

int main() {

	string s = "abc";
	cout << makeSmallestPalindrome(s) << "\n";

	string s1 = "egcfe";
	cout << makeSmallestPalindrome(s1) << "\n";

	string s2 = "abcd";
	cout << makeSmallestPalindrome(s2) << "\n";

	return 0;
}