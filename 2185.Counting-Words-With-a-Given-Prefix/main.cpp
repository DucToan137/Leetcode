#include<iostream>
#include<vector>
#include<string>

using namespace std;

int prefixCount(vector<string>& words, string pref) {
	int res = 0;

	for (int i = 0; i < words.size(); i++) {
		if (words[i].find(pref) == 0) {
			res++;
		}
	}

	return res;
}

int main() {

	vector<string> words = { "pay","attention","practice","attend" };
	string pref = "at";
	cout << prefixCount(words, pref) << endl;

	vector<string> words1 = { "leetcode","win","loops","success" };
	string pref1 = "code";
	cout << prefixCount(words1, pref1) << endl;

	return 0;
}