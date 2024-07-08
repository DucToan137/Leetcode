#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

char repeatedCharacter(string s) {
	map<char, int> mp;

	for (char c : s) {
		mp[c]++;
		if(mp[c] == 2) {
			return c;
		}
	}
	return ' ';
}

int main() {

	string s = "xyzzaz";
	cout << repeatedCharacter(s) << endl;

	return 0;
}