#include<iostream>
#include<string>
#include<vector>

using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
	int res = 0;

	for (int i = 0; i < patterns.size(); ++i) {
		if (word.find(patterns[i]) != string::npos) {
			res++;
		}
	}

	return res;
}

int main() {

	vector<string> patterns = { "a", "abc", "bc", "d" };
	string word = "abc";
	cout << numOfStrings(patterns, word) << endl;


	return 0;
}