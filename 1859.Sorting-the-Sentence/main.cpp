#include<iostream>
#include<string>
#include<unordered_map>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

string sortSentence(string s) {
	stringstream ss(s);
	string word;
	unordered_map<int, string> m;
	string res = "";

	while (ss >> word) {
		int n = word.size();
		int index = word[n - 1] - '0';
		m[index] = word.substr(0, n - 1);
	}

	for(int i = 1; i <= m.size(); i++) {
		res += m[i] + " ";
	}

	res.pop_back();

	return res;
}

int main() {

	string s = "is2 sentence4 This1 a3";
	cout << sortSentence(s) << endl;

	return 0;
}