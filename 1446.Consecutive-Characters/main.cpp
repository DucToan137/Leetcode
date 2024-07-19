#include<iostream>
#include<string>

using namespace std;

int maxPower(string s) {
	int max = 1;

	int count = 1;
	for (int i = 0; i < s.size(); ++i) {
		if(s[i] == s[i+1]) {
			count++;
			if (count > max) {
				max = count;
			}
		} else {
			count = 1;
		}
		
	}

	return max;
}

int main() {

	string s = "leetcode";
	cout << maxPower(s) << endl;

	string s1= "abbcccddddeeeeedcba";
	cout << maxPower(s1) << endl;

	return 0;
}