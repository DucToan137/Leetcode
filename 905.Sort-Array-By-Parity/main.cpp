#include<iostream>
#include<vector>

using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
	int i = 0;
	int j = nums.size() - 1;

	while(i<=j){
		if(nums[i] % 2 == 0){
			++i;
		}
		else if(nums[j] % 2 != 0){
			--j;
		}
		else{
			swap(nums[i], nums[j]);
			++i;
			--j;
		}
	}

	return nums;
}

int main() {

	vector<int> nums = { 3, 1, 2, 4 };
	vector<int> res = sortArrayByParity(nums);

	for (int i = 0; i < res.size(); ++i) {
		cout << res[i] << " ";
	}
	return 0;
}
