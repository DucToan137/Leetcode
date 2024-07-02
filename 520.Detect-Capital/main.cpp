#include<iostream>
#include<string>

using namespace std;

bool detectCapitalUse(string word) {
	int n = word.size();
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (isupper(word[i])) {
			count++;
		}
	}
	return count == 0 || count == n || (count == 1 && isupper(word[0]));
}

int main() {

	string word = "USA";
	cout << detectCapitalUse(word) << endl;

	string word2 = "FlaG";
	cout << detectCapitalUse(word2) << endl;

	string word3 = "leetcode";
	cout << detectCapitalUse(word3) << endl;

	return 0;
}