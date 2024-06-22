#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
	int i = 0;
	for (i; i < nums.size(); i++) {
		if (target <= nums[i]) {
			return i;
		}
	}
	return i;
}


int main() {

	vector<int> nums = { 1,3,5,6 };
	vector<int> nums1 = { 1,3,5,6 };
	vector<int> nums2 = { 1,3,5,6 };

	cout << searchInsert(nums, 5) << "\n";
	cout << searchInsert(nums1, 2) << "\n";
	cout << searchInsert(nums2, 7) << "\n";

	return 0;
}