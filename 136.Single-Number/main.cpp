#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int singleNumber(vector<int>& nums) {
	nums:sort(nums.begin(), nums.end());
	if(nums.size() == 1) {
		return nums[0];
	}

	if(nums[0] != nums[1]) {
		return nums[0];
	}

	int n = nums.size();
	if (nums[n - 1] != nums[n - 2]) {
		return nums[n - 1];
	}

	for (int i = 1; i < n - 1; ++i) {
		if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
			return nums[i];
		}
	}

}

int main() {
	vector<int> nums = { 4,1,2,1,2 };
	vector<int> nums1 = { 2,2,1 };

	cout << singleNumber(nums) << "\n";
	cout << singleNumber(nums1);

	return 0;
}