#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isAcronym(vector<string>& words, string s) {
	string res = "";
	for (int i = 0; i < words.size(); i++) {
		res += words[i][0];
	}
	return res == s;
}

int main() {

	vector<string> words = {"apple", "canana", "cherry"};
	string s = "abc";
	cout << isAcronym(words, s) << endl;



	return 0;
}