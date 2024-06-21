#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> result;

	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size(); j++) {
			if (i != j) {
				int temp = nums[i] + nums[j];
				if (temp == target) {
					result.push_back(i);
					result.push_back(j);
					return result;
				}
			}
		}
	}

	return result;
}

int main() {
	vector<int> nums = { 2, 7, 11, 15 };
	vector<int> nums1 = { 3, 2, 4 };
	vector<int> result = twoSum(nums1, 6);

	for (int i : result) {
		cout << i << " ";
	}

	return 0;
}
