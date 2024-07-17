#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;

int countWords(vector<string>& words1, vector<string>& words2) {
	map<string, int> w1;
	map<string, int> w2;

	for (int i = 0; i < words1.size(); i++) {
		w1[words1[i]]++;
	}

	for (int i = 0; i < words2.size(); i++) {
		w2[words2[i]]++;
	}

	int count = 0;

	for (int i = 0; i < words1.size(); ++i) {
		if(w1[words1[i]] == 1 && w2[words1[i]] == 1)
			count++;
	}

	return count;
}

int main() {

	vector<string> words1 = {"hello", "hello", "leetcode"};
	vector<string> words2 = {"hello", "world", "leetcode"};

	cout << countWords(words1, words2) << endl;

	return 0;
}