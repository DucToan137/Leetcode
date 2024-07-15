#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
	vector<int> result;

	sort(arr1.begin(), arr1.end());

	for (int i = 0; i < arr2.size(); ++i) {
		for (int j = 0; j < arr1.size(); ++j) {
			if (arr1[j] == arr2[i]) {
				// arr1.erase(arr1.begin() + j);
				// j--;
				// arr1.push_back(arr2[i]);
				result.push_back(arr2[i]);
			}
		}
	}

	for (int i = 0; i < arr1.size(); ++i) {
		if (find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end()) {
			result.push_back(arr1[i]);
		}
	}

	return result;
}


int main() {

	vector<int > arr1 = { 2,3,1,3,2,4,6,7,9,2,19 };
	vector<int> arr2 = { 2,1,4,3,9,6 };
	vector<int> res  = relativeSortArray(arr1, arr2);

	

	for(int i = 0; i < res.size(); ++i) {
		cout << res[i] << " ";
	}


	return 0;
}

