#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	vector<int> res;

	for (int i = 0; i < m; ++i) {
		res.push_back(nums1[i]);
	}

	for(int j = 0; j < n; ++j) {
		res.push_back(nums2[j]);
	}


	nums1 = res;

	res:sort(nums1.begin(), nums1.end());

	for(int i: nums1) {
		cout << i << " ";
	}
	
}

int main() {

	vector<int> nums1 = { 1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6 };

	int m = 3;
	int n = 3;

	merge(nums1, m, nums2, n);




	return 0;
}