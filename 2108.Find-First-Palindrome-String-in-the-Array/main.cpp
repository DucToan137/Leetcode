#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(string s) {
	// Solution 1
	// 
	//string temp = s;
	//reverse(temp.begin(), temp.end());

	//if (temp == s) {
	//	return true;
	//}
	//return false;

	// Solution 2

	int i = 0;
	int n = s.size() - 1;

	while (i < n) {
		if (s[i] != s[n])
		{
			return false;
		}
		++i;
		--n;
	}
	return true;
}

string firstPalindrome(vector<string>& words) {
	for (string i : words) {
		if (isPalindrome(i)) {
			return i;
		}
	}
	return "";
}

int main() {

	string a = "ada";
	cout << isPalindrome(a);

	return 0;
}