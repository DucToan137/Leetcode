#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {

	// Solution 1
	/*int dem = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 0) {
			nums.erase(nums.begin() + i);
			i--;
			dem++;
		}
	}

	for (int i = 0; i < dem; i++) {
		nums.push_back(0);
	}*/

	// Solution 2

	int n = nums.size();
	int k = 0;

	for (int i = 0; i < n; ++i) {
		if (nums[i] != 0) {
			swap(nums[i], nums[k]);
			++k;
		}
	}
}

int main() {

	vector<int> nums1 = { 0,0,1 };
	vector<int> nums = { 0,1,0,3,12 };
	moveZeroes(nums);

	for(int i: nums) {
		cout << i << " ";
	}


	return 0;
}