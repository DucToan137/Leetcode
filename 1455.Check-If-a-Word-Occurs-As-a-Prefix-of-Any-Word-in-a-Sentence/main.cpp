#include<iostream>
#include<sstream>
#include<string>

using namespace std;

	int isPrefixOfWord(string sentence, string searchWord) {
		stringstream ss(sentence);
		string word;

		int i = 0;
		while(ss >> word) {
			i++;
			if (word.find(searchWord) == 0) {
				return i;
			}
		}
		return -1;
	}

int main() {

	string sentence = "i love eating burger";
	string searchWord = "you";
	cout << isPrefixOfWord(sentence, searchWord) << endl;

	return 0;
}
