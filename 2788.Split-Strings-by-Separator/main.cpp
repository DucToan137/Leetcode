#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
	vector<string> res;

	for (int i = 0; i < words.size(); ++i) {
		stringstream ss(words[i]);
		string word;
		while (getline(ss, word, separator)) {
			if (word.size() > 0) {
				res.push_back(word);;
			}
		}
	}

	return res;
}

int main() {

	vector<string> words = { "one.two.three","four.five","six" };
	char separator = '.';
	vector<string> res = splitWordsBySeparator(words, separator);

	vector<string> words1 = { "$easy$","$problem$" };
	char separator1 = '$';
	vector<string> res1 = splitWordsBySeparator(words1, separator1);

	vector<string> words2 = { "|||" };
	char separator2 = '|';
	vector<string> res2 = splitWordsBySeparator(words2, separator2);

	for (int i = 0; i < res2.size(); ++i) {
		cout << res2[i] << endl;
	}

	return 0;
}