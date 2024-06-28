#include<iostream>
#include<vector>

using namespace std;

int countPairs(vector<int>& nums, int target) {
	int res = 0;

	for (int i = 0; i < nums.size(); ++i) {
		for (int j = i + 1; j < nums.size(); ++j) {
			int temp = nums[i] + nums[j];
			if (temp < target) {
				res++;
			}
		}
	}

	return res;
}

int main() {

	return 0;
}