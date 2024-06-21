#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
	string temp = "";

	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i]) || isdigit(s[i])) {
			temp += tolower(s[i]);
		}
	}

	int i = 0;
	int j = temp.size() - 1;
	while (i < j) {
		if (temp[i] != temp[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {

	string s = "A man, a plan, a canal: Panam";
	string s1 = "race a car";
	string s2 = " ";
	cout << isPalindrome(s2);


	return 0;
}