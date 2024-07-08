#include<iostream>
#include<unordered_map>

using namespace std;

bool areOccurrencesEqual(string s) {
	unordered_map<char, int> mp;
	for (char c : s) {
		mp[c]++;
	}

	for(auto it : mp) {
		if(it.second != mp.begin()->second) {
			//cout << it.second << " " << mp.begin()->second << endl;
			return false;
		}
	}

	return true;
}

int main() {

	string s = "abaccc";
	cout << areOccurrencesEqual(s) << endl;

	return 0;
}