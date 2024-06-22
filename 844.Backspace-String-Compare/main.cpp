#include<iostream>
#include<string>

using namespace std;


string xoa(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '#') {
			for (int j = i; j >= 0; --j) {
				if (isalpha(s[j])) {
					s[j] = '&';
					break;
				}
			}
			s.erase(i, 1);
			i--;
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '&') {
			s.erase(i, 1);
			i--;
		}
	}

	return s;
}

bool backspaceCompare(string s, string t) {
	string s1 = xoa(s);
	string t1 = xoa(t);

	return s1 == t1;
}



int main() {

	string s = "ab#c";
	string t = "a#";

	string s1 = "ab##";
	string t1 = "c#d#";

	string s2 = "a##c";
	string t2 = "#a#c";

	//cout << xoa(t1);

	cout << backspaceCompare(s, t) << "\n";
	cout << backspaceCompare(s1, t1);

	return 0;
}