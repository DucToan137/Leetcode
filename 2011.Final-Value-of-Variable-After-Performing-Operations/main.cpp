#include<iostream>
#include<vector>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
	int result = 0;
	for (string s : operations) {
		if (s == "++X" || s == "X++") {
			result++;
		}
		else {
			result--;
		}
	}
	return result;
}

int main() {

	vector<string> operations = { "--X","X++","X++" };
	cout << finalValueAfterOperations(operations);

	return 0;
}