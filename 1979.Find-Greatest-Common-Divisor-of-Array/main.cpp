#include<iostream>
#include<vector>

using namespace std;

int findGCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	return findGCD(b, a % b);
}


int findGCD(vector<int>& nums) {
	int min = nums[0];
	int max = nums[0];
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] < min) {
			min = nums[i];
		}
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	return findGCD(min, max);
}


int main() {

	return 0;
}

