#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int percentageLetter(string s, char letter) {
	int count = 0;

	unordered_map<char, int> m;

	for (int i = 0; i < s.size(); i++) {
		if(s[i] == letter) {
			count++;
		}
	}
	
	int res = (count * 100) / s.size();
	return res;
}

int main() {

	string s = "foobar";
	char letter = 'o';

	cout << percentageLetter(s, letter) << endl;

	return 0;
}