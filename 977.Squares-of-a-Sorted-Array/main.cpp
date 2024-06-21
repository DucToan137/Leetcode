#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
	vector<int> res;

	for(int i = 0; i < nums.size(); i++) {
		res.push_back(nums[i] * nums[i]);
	}

	res:sort(res.begin(), res.end());
	

	return res;
}

int main() {

	vector<int> nums = {-4, -1, 0, 3, 10};
	vector<int> nums1 = {-7, -3, 2, 3, 11};

	vector<int> res = sortedSquares(nums1);


	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}

	return 0;
}