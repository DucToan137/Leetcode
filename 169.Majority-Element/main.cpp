#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int xuatHien(vector<int>& nums, int n) {
	int count = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == n) {
			count++;
		}
	}
	return count;
}

int majorityElement(vector<int>& nums) {
	// Solution 1
	
	int count = 0;
	for(int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size(); ++j) {
			if (nums[i] == nums[j]) {
				count++;
			}
		}
		if(count > nums.size() / 2) {
			return nums[i];
		}
		count = 0;
	}
	
	return -1;
}

int main() {

	vector<int> nums = {3,2,3};
	vector<int> nums1 = {2,2,1,1,1,2,2};

	cout << majorityElement(nums) << "\n";
	cout << majorityElement(nums1);

	return 0;
}
