#include<iostream>
#include<string>

using namespace std;

string toLowerCase(string s) {
	for (int i = 0; i < s.size(); ++i) {
		s[i] = tolower(s[i]);
	}
	return s;
}

int main() {

	string s = "Hello";
	cout << toLowerCase(s) << endl;

	return 0;
}