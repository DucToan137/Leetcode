#include<iostream>
#include<vector>

using namespace std;

int count(vector<int> nums, int n) {
	int res = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] < n && nums[i] != n) {
			res++;
		}
	}

	return res;
}

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
	vector<int> res;

	for (int i = 0; i < nums.size(); ++i) {
		int count = 0;
		for (int j = 0; j < nums.size(); ++j) {
			if (nums[i] > nums[j] && i != j) {
				count++;
			}
		}
		res.push_back(count);
	}

	return res;
}

int main() {

	vector<int> a = { 8, 1, 2, 2, 3 };
	vector<int> res = smallerNumbersThanCurrent(a);

	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}

	return 0;
}