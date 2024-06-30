#include<iostream>
#include<unordered_map>

using namespace std;

int firstUniqChar(string s) {
	for (int i = 0; i < s.size(); ++i) {
		if (s.find(s[i]) == s.rfind(s[i]))
			return i;
	}
	return -1;
}

int main() {

	string s = "leetcode";
	cout << firstUniqChar(s) << endl;

	string s1 = "aabb";
	cout << firstUniqChar(s1) << endl;

	return 0;
}