#include<iostream>
#include<vector>

using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
	vector<int> res;

	for (int i = 0; i < nums.size() / 2; ++i) {
		for (int j = 0; j < nums[2 * i]; ++j) {
			res.push_back(nums[2 * i + 1]);
		}
	}

	return res;
}

int main() {

	vector<int> nums = { 1,2,3,4 };

	vector<int> res = decompressRLElist(nums);

	for (auto i : res) {
		cout << i << " ";
	}

	return 0;
}