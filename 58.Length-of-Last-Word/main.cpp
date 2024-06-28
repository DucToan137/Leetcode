#include<iostream>
#include<sstream>

using namespace std;

int lengthOfLastWord(string s) {

	stringstream ss(s);
	string word;
	while (ss) {
		ss >> word;
	}

	return word.size();
}

int main() {

	return 0;
}