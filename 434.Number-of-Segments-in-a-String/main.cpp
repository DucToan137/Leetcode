#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int countSegments(string s) {
	int res = 0;

	stringstream ss(s);
	string word;
	while (ss >> word) {
		res++;
	}

	return res;
}

int main() {

	string s = "Hello, my name is John";
	cout << countSegments(s) << endl;

	return 0;
}
