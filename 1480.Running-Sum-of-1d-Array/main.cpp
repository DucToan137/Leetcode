#include<iostream>
#include<vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {
	// Solution 1
	vector<int> res;

	for (int i = 0; i < nums.size(); ++i) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += nums[j];
		}
		res.push_back(sum);
	}

	return res;

	// Solution 2
	for (int i = 1; i < nums.size(); i++) {
		nums[i] = nums[i - 1] + nums[i];
	}
	return nums;
}

int main() {

	return 0;
}
