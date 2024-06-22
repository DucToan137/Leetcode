#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	if(nums.size() == 0) {
		return 0;
	}

	int i = 0;
	for (i; i < nums.size(); ++i) {
		if (nums[i] == val) {
			nums.erase(nums.begin() + i);
			i--;
		}
	}

	return nums.size();
}

int main() {

	vector<int> nums = {3,2,2,3};
	vector<int> nums1 = {0,1,2,2,3,0,4,2};

	cout << removeElement(nums, 3) << "\n";
	cout << removeElement(nums1, 2);

	return 0;
}
