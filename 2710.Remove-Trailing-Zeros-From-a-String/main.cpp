#include<iostream>
#include<string>

using namespace std;

string removeTrailingZeros(string num) {
	for (int i = num.size() - 1; i > 0; i--) {
		if (num[i] == '0') {
			num.pop_back();
		}
		else {
			break;
		}
	}
	return num;
}

int main() {

	string num = "123000";
	cout << removeTrailingZeros(num) << "\n";

	return 0;
}