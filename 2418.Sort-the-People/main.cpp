#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
	for (int i = 0; i < heights.size() - 1; ++i) {
		for (int j = i + 1; j < heights.size(); ++j) {
			if (heights[i] < heights[j]) {
				swap(heights[i], heights[j]);
				swap(names[i], names[j]);
			}
		}
	}
	return names;
}

int main() {

	vector<string> names = { "Mary","John","Emma" };
	vector<int> heights = { 180,165,170 };
	sortPeople(names, heights);

	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << " " << heights[i] << endl;
	}

	return 0;
}