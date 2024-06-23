#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string reverseWords(string s) {
	stringstream ss(s);
	string word;
	string result = "";
	while (ss >> word) {
		reverse(word.begin(), word.end());
		result += word + " ";
	}
	result.pop_back();
	return result;
}

int main() {

	string s = "Let's take LeetCode contest";
	cout << reverseWords(s) << "\n";

	string s1 = "God Ding";
	cout << reverseWords(s1) << "\n";

	return 0;
}
