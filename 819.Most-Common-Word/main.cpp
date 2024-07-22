#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<sstream>

using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned) {
	unordered_map<string, int> map;
	string res = "";

	string temp1 = "!?',;.";
	for (int i = 0; i < paragraph.size(); ++i) {
		if (temp1.find(paragraph[i]) != string::npos && paragraph[i+1] != ' ') {
			paragraph.insert(i + 1, " ");
		}
	}

	cout << paragraph << "\n";

	istringstream iss(paragraph);
	string word;

	

	

	while (getline(iss,word,' ') || 
		getline(iss, word, '!') || 
		getline(iss, word, '?') || 
		getline(iss, word, '\'') || 
		getline(iss, word, ';') ||
		getline(iss, word, ',') ||
		getline(iss, word, '.')) {

		string temp = "";
		for (char c : word) {
			if (isalpha(c)) {
				temp += tolower(c);
			}
		}

		if(banned.size() == 0 || find(banned.begin(), banned.end(), temp) == banned.end()) {
			map[temp]++;
			if (res == "" || map[temp] > map[res]) {
				res = temp;
			}
		}

	}

	


	return res;
}


int main() {

	string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
	vector<string> banned = { "hit" };
	cout << mostCommonWord(paragraph, banned) << endl;

	string paragraph2 = "a, a, a, a, b,b,b,c, c";
	vector<string> banned2 = { "a" };
	cout << mostCommonWord(paragraph2, banned2) << endl;

	


	return 0;
}