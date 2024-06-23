#include<iostream>
#include<string>

using namespace std;

string reversePrefix(string word, char ch) {
	if(word.size() == 0) {
		return word;
	}

	if(word.find(ch) == string::npos) {
		return word;
	}
	else {
		int index = word.find(ch);
		string temp =word.substr(0, index + 1);
		reverse(temp.begin(), temp.end());
		word.replace(0, index + 1, temp);
		cout << temp << "\n";
	}
	return word;

}

int main() {

	string word = "abcdef";
	char ch = 'd';

	cout << reversePrefix(word, ch) << "\n";

	return 0;
}