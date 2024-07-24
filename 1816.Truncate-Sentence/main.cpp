#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string truncateSentence(string s, int k) {
	istringstream iss(s);
	string res = "";
	string word;
	int i = 0;

	while(getline(iss, word, ' ') && i < k) {
		if(i > 0) res += " ";
		i++;
		res += word;
	}


	return res;
}

int main() {

	string s = "Hello how are you Contestant";
	int k = 4;
	cout << truncateSentence(s, k) << "\n";

	return 0;
}
