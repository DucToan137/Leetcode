#include<iostream>
#include<string>

using namespace std;

int count(string s, char c) {
	int res = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == c) {
			res++;
		}
	}

	return res;
}

bool isAnagram(string s, string t) {
	
	if(s.size() != t.size()) {
		return false;
	}

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < t.size(); j++) {
			if (s[i] == t[j]) {
				s.erase(i, 1);
				t.erase(j, 1);
				--i;
				--j;
				break;
			}
		}
	}

	if (s.size() != 0 || t.size() != 0) {
		return false;
	}

	return true;
}

int main() {

	string s = "anagram";
	string t = "nagaram";

	string s1 = "rat";
	string t1 = "car";

	cout << isAnagram(s, t) << endl;
	cout << isAnagram(s1, t1) << endl;


	return 0;
}