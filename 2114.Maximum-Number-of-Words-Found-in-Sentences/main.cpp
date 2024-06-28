#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

int mostWordsFound(vector<string>& sentences) {
	int max = -1;

	for (int i = 0; i < sentences.size(); ++i) {
		stringstream ss(sentences[i]);
		string word;

		int count = 0;
		while (ss >> word) {
			count++;
		}

		if (count > max) {
			max = count;
		}
	}
	
	return max;
}

int main() {

	return 0;
}