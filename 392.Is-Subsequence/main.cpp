#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isSubsequence(string s, string t) {

	// Solution 1
	/*for (int i = 0; i < s.size(); ++i) {
		if (t.find(s[i]) == string::npos)
			return false;
		t.erase(t.begin(), t.begin() + t.find(s[i]) + 1);
	}

	return true;*/

	// Solution 2

	int i = 0;
	for (int j = 0; j < t.size(); j++) {
		if (s[i] == t[j])
			i++;
	}
	return i == s.size();
}

int main() {

	string s = "acb";
	string t = "ahbgdc";

	cout << isSubsequence(s, t) << endl;

	return 0;
}
