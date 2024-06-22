#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	vector<int> res;
	digits[digits.size() - 1] += 1;

	for(int i = digits.size() - 1; i > 0; --i) {
		if(digits[i] == 10) {
			digits[i] = 0;
			digits[i - 1] += 1;
			
		}
		
	}

	if (digits[0] == 10) {
		digits[0] = 0;
		digits.insert(digits.begin(), 1);
	}

	return digits;
}

void xuat(vector<int > digits) {
	for (int i = 0; i < digits.size(); i++) {
		cout << digits[i] << " ";
	}
	cout << endl;
}

int main() {

	vector<int> digits = { 1,2,3 };
	vector<int> digits1 = { 4,3,2,1 };
	vector<int> digits2 = { 9 };

	vector<int> res = plusOne(digits);
	vector<int> res1 = plusOne(digits1);
	vector<int> res2 = plusOne(digits2);

	xuat(res);
	xuat(res1);
	xuat(res2);

	return 0;
}
