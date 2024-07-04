#include<iostream>
#include<vector>


using namespace std;

int sumOfSquares(vector<int>& nums) {
	int res = 0;
	int n = nums.size();
	

	for (int i = 0; i < n; ++i) {
		if (n % (i + 1) == 0) {
			res += nums[i] * nums[i];
		}
	}

	return res;
}

int main() {

	vector<int> nums = {1, 2, 3, 4};
	cout << sumOfSquares(nums) << endl;

	return 0;
}