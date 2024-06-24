#include<iostream>
#include<vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
	int res = 0;

	for (int i = 0; i < nums.size(); ++i) {
		for (int j = 0; j < nums.size(); ++j) {
			if (i < j && nums[i] == nums[j]) {
				res++;
			}
		}
	}
	return res;
}

int main() {
	
	vector<int> nums = { 1, 2, 3, 1, 1, 3 };
	cout << numIdenticalPairs(nums);

	return 0;
}