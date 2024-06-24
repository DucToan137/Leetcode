#include<iostream>
#include<string>
#include<vector>
using namespace std;


vector<int> findWordsContaining(vector<string>& words, char x) {
	vector<int> res;

	for (int i = 0; i < words.size(); ++i) {
		if (words[i].find(x) != string::npos) {
			res.push_back(i);
		}
	}


	return res;
}

int main() {

	vector<string> words = { "abc","def","ghij","klm","nopq" };
	char x = 'i';
	vector<int> result = findWordsContaining(words, x);

	for (int i : result) {
		cout << i << " ";
	}

	return 0;
}