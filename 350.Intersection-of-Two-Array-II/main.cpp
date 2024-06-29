#include<iostream>
#include<vector>

using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	vector<int> res;

	for (int i = 0; i < nums1.size(); ++i) {
		for (int j = 0; j < nums2.size(); ++j)
			if (nums1[i] == nums2[j]) {
				res.push_back(nums1[i]);
				nums2.erase(nums2.begin() + j);
				break;
			}
	}

	return res;
}

int main() {

	vector<int> nums1 = { 1, 2, 2, 1 };
	vector<int> nums2 = { 2, 2 };

	vector<int> res = intersect(nums1, nums2);

	for (int i = 0; i < res.size(); ++i)
		cout << res[i] << " ";

	return 0;
}
