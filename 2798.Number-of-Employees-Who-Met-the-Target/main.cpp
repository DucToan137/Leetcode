#include<iostream>
#include<vector>

using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
	int res = 0;
	for(auto i : hours) {
		if(i >= target) {
			res++;
		}
	}
	return res;
}


int main() {

	return 0;
}
