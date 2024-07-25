#include<iostream>
#include<vector>

using namespace std;

bool isArraySpecial(vector<int>& nums) {
	for (int i = 0; i < nums.size() -1; ++i) {
		if ((nums[i] + nums[i + 1]) % 2 == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	vector<int> nums = {1};
	cout << isArraySpecial(nums) << "\n";

	vector<int> nums1 = {1, 3};
	cout << isArraySpecial(nums1) << "\n";

	return 0;
}