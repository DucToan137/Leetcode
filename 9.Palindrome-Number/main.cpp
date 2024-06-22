#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(int x) {
	string s = to_string(x);

	int i = 0;
	int j = s.size() - 1;

	while (i <= j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}

	return true;
}


int main() {

	int a = 1221;
	cout << isPalindrome(a);

	return 0;
}