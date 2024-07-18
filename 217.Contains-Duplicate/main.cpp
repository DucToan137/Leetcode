#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
	// Solution 1
	map<int, int> m;
	for(int i = 0; i < nums.size(); i++) {
		m[nums[i]]++;
		if (m[nums[i]] > 1) {
			return true;
		}
	}
	return false;
	
	// Solution 2
	sort(nums.begin(),nums.end());
	for(int i = 0; i < nums.size() - 1; i++) {
		if(nums[i] == nums[i+1]) {
			return true;
		}
	}
	return false;

}

int main() {

	vector<int> nums = {1, 2, 3, 4};
	cout << containsDuplicate(nums) << endl;

	return 0;
}