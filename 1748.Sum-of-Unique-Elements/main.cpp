#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int sumOfUnique(vector<int>& nums) {
	unordered_map<int, int> mp;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		mp[nums[i]]++;
	}
	for (int i = 0; i < nums.size(); ++i) {
		if (mp[nums[i]] == 1) {
			sum += nums[i];
		}
	}
	return sum;
}

int main() {

	vector<int> nums = {1, 2, 3, 2};
	cout << sumOfUnique(nums) << endl;

	vector<int> nums2 = {1, 1, 1, 1, 1};
	cout << sumOfUnique(nums2) << endl;

	return 0;
}