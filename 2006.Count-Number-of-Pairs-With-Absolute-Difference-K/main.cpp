#include<iostream>
#include<vector>

using namespace std;

int countKDifference(vector<int>& nums, int k) {
	int res = 0;

	for (int i = 0; i < nums.size(); ++i) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (abs(nums[i] - nums[j]) == abs(k)) {
				res++;
			}
		}
	}

	return res;
}

int main() {

	return 0;
}
