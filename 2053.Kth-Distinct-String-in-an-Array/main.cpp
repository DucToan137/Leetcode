#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>

using namespace std;

// Wrong Answer
//string kthDistinct(vector<string>& arr, int k) {
//	unordered_map<string, int> mp;
//	for (string s : arr) {
//		mp[s]++;
//	}
//
//	vector<string> v;
//
//	for (auto it : mp) {
//		if (it.second == 1)
//		{
//			v.push_back(it.first);
//		}
//		
//	}
//
//	if (k > v.size()) {
//		return "";
//	}
//
//	return v[k - 1];
//
//}

// Accepted
string kthDistinct(vector<string>& arr, int k) {
	int n = arr.size();

	map<string, int> mp;

	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}

	int count = 0;
	for (auto it : arr) {
		if (mp[it] == 1) {
			count++;

			if (count == k)
				return it;
		}
	}

	return "";
}

int main() {

	vector<string> arr = { "aaa","aa","a" };
	int k = 1;
	cout << kthDistinct(arr, k) << endl;

	vector<string> arr1 = { "d","b","c","b","c","a" };
	cout << kthDistinct(arr1, 2) << endl;

	vector<string> arr2 = { "a","b", "a"};
	cout << kthDistinct(arr2, 3) << endl;

	return 0;
}