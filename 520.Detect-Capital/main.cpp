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

	// Solution 2
	/*int n = word.size(), lowercase = 0, uppercase = 0;

	if (n == 1) return true;

	bool temp = 0;
	if (word[0] >= 'A' && word[0] <= 'Z') temp = 1;

	for (int i = 1; i < n; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') {
			uppercase++;
			if (temp == 0 || lowercase > 0) return 0;
		}
		else {
			if (uppercase > 0) return 0;
			lowercase++;
		}
	}
	return 1;*/
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