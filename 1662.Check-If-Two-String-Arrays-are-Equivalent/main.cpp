#include<iostream>
#include<vector>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
	string temp1 = "";
	string temp2 = "";

	for(int i = 0; i < word1.size(); ++i) {
		temp1 += word1[i];
	}

	for(int i = 0; i < word2.size(); ++i) {
		temp2 += word2[i];
	}

	return temp1 == temp2;
}

int main() {

	return 0;
}