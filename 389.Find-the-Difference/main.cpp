#include<iostream>
#include<string>

using namespace std;

char findTheDifference(string s, string t) {
	for (int i = 0; i < s.size(); ++i) {
		if (t.find(s[i]) != string::npos)
			t.erase(t.begin() + t.find(s[i]));
	}
	return t[0];
}

int main() {

	string s = "abcde";
	string t = "abcded";

	cout << findTheDifference(s, t) << endl;

	return 0;
}