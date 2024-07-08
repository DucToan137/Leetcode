#include<iostream>

using namespace std;

int countGoodSubstrings(string s) {
	int res = 0;

	if(s.size() < 3) {
		return 0;
	}

	for (int i = 0; i < s.size() - 2; ++i) {
		if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
			res++;
		}
	}

	return res;
}

int main() {

	string s = "xyzzaz";
	cout << countGoodSubstrings(s) << endl;

	string s1 = "aababcabc";
	cout << countGoodSubstrings(s1) << endl;

	return 0;
}