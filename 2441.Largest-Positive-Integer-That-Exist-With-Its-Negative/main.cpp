#include<iostream>
#include<vector>

using namespace std;

bool inArray(vector<int>& nums, int target) {
	for (int i : nums) {
		if (i == target) {
			return true;
		}
	}
	return false;
}

int findMaxK(vector<int>& nums) {

	vector<int> temp;


	for (int i : nums) {
		if (i < 0) {
			temp.push_back(-i);
		}
	}
	int max = 0;

	for (int i : temp) {
		if (i > max && inArray(temp, i)) {
			max = i;
		}
	}
	if (max == 0) {
		return -1;
	}
	else {
		return max;
	}
}

int main() {

	vector<int> nums = { 3, 2, 1, 5, 4, -1, -2, -3, -4, -5 };
	cout << findMaxK(nums);

	return 0;
}
