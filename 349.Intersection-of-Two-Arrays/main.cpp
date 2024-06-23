#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void deleteDuplicate(vector<int> &res) {
	res:sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	// Solution 1
	/*vector<int> res;

	for (int i : nums1) {
		for (int j : nums2) {
			if (i == j) {
				res.push_back(i);
				break;
			}
		}
	}

	deleteDuplicate(res);

	return res;*/

	// Solution 2
	bool s[1001];
	memset(s, false, sizeof(s));
	for (int x : nums1) {
		s[x] = true;
	}
	vector<int> ans;
	for (int x : nums2) {
		if (s[x]) {
			ans.push_back(x);
			s[x] = false;
		}
	}
	return ans;

}

void print(vector<int> v){
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	vector<int> nums1 = { 1, 2, 2, 1 };
	vector<int> nums2 = { 1, 2 };

	vector<int> res = intersection(nums1, nums2);
	print(res);


	return 0;
}
