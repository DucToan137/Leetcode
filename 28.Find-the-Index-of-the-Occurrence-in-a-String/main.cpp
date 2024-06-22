#include<iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
	if(haystack.find(needle) != string::npos) {
		return haystack.find(needle);
	}
	else {
		return -1;

	}
}

int main() {
	string haystack = "sadbutsad";
	string needle = "sad";

	string haystack1 = "leetcode";
	string needle1 = "leeto";

	cout << strStr(haystack1, needle1);

	return 0;
}