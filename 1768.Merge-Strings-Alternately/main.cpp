#include<iostream>
#include<string>

using namespace std;

string mergeAlternately(string word1, string word2) {
	string res = "";

	int i = 0;
	int j = 0;

	while (i < word1.size() && j < word2.size()) {
		res = res + word1[i] + word2[j];
		++i;
		++j;
	}

	while (i < word1.size()) {
		res += word1[i];
		++i;
	}

	while (j < word2.size()) {
		res += word2[j];
		++j;
	}

	return res;
}

int main() {

	string word1 = "abc";
	string word2 = "pqr";
	cout << mergeAlternately(word1, word2) << endl;

	string word3 = "ab";
	string word4 = "pqrs";
	cout << mergeAlternately(word3, word4) << endl;

	string word5 = "abcd";
	string word6 = "pq";
	cout << mergeAlternately(word5, word6) << endl;


	return 0;
}