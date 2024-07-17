#include<iostream>
#include<vector>
#include<map>


using namespace std;



int findLucky(vector<int>& arr) {

	int max = -1;
	map<int, int> m;
	for (int i = 0; i < arr.size(); i++) {
		m[arr[i]]++;
	}

	for (auto i : m) {
		// cout << i.first << " " << i.second << "\n";
		if(i.first == i.second) {
			max = i.first;
		}
	}

	return max;
}

int main() {

	vector<int> arr = {2, 2, 3, 4};
	cout << findLucky(arr) << endl;

	vector<int> arr1 = {1, 2, 2, 3, 3, 3};
	cout << findLucky(arr1) << endl;

	return 0;
}
