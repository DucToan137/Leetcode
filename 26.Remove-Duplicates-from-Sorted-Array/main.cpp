#include<iostream>
#include<vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {

	// Solution 1
	//for(int i = 0; i < nums.size(); i++) {
	//	for(int j= i + 1; j < nums.size(); j++) {
	//		if(nums[i] == nums[j]) {
	//			nums.erase(nums.begin() + i);
	//			i--;
	//			break;
	//		}
	//	}
	//}

	//return nums.size();

	// Solution 2

	if(nums.size() == 0) {
		return 0;
	}

	int i = 0;
	for (int j = 1; j < nums.size(); j++) {
		if (nums[j] != nums[i]) {
			i++;
			nums[i] = nums[j];
		}
	}

	return i + 1;
}

int main() {

	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	vector<int> nums1 = {1,1,2};

	cout << removeDuplicates(nums) << "\n";
	cout << removeDuplicates(nums1);


	return 0;
}