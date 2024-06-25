#include<iostream>
#include<vector>
#include<tuple>

using namespace std;

int countFrequency(vector<int>& nums, int n) {
	int res = 0;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == n) {
			res++;
		}
	}

	return res;
}

int maxFrequencyElements(vector<int>& nums) {

	int max = -1;
	vector<tuple<int,int>> res;
	int sum = 0;

	for (int i = 0; i < nums.size(); ++i) {

		int count = countFrequency(nums, nums[i]);
		
		if (count > max) {
			max = count;
		}

		tuple<int, int> t = make_tuple(nums[i], count);
		// res.push_back(t);
		if (res.empty()) {
			res.push_back(t);
		}
		else {
			bool flag = false;
			for (int i = 0; i < res.size(); i++) {
				if (get<0>(res[i]) == get<0>(t) && get<1>(res[i]) == get<1>(t)) {
					flag = true;
					break;
				}
			}
			if (!flag) {
				res.push_back(t);
			}
		}	
	}

	cout << res.size() << endl;
	for(auto i : res) {
		if (get<1>(i) == max) {
			sum += get<1>(i);
		}
	}

	return sum;
}

int main() {

	vector<int> a = { 1, 2, 2, 3, 1 , 4};
	cout << maxFrequencyElements(a);



	return 0;
}
