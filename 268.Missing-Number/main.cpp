#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums) {
	nums:sort(nums.begin(), nums.end());
	/*for (int i = 0; i <= nums.size(); i++) {
		if (find(nums.begin(), nums.end(), i) == nums.end()) {
			return i;
		}
	}*/
	/*for (int i = 0; i < nums.size(); i++) {
		if(nums[i] != i) {
			return i;
		}
	}*/

	/*int n = nums.size();
	int i = 0;
	while (i < n) {
		int correctIdx = nums[i];
		if (correctIdx == n || correctIdx == i) i++;
		else swap(nums[i], nums[correctIdx]);
	}*/

	for (int i = 0; i < nums.size(); i++) {
		if (i != nums[i]) {
			return i;
		}
	}

	return nums.size();
}


int main() {


	vector<int> nums = {3, 0, 1};
	vector<int> nums1 = {0, 1};
	vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

	cout << missingNumber(nums3);

	return 0;
}