#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> res;

	if (numRows == 0) {
		return res;
	}

	if (numRows == 1) {
		res.push_back({ 1 });
		return res;
	}

	if (numRows == 2) {
		res.push_back({ 1 });
		res.push_back({ 1, 1 });
		res[1][1] = 1;
		return res;
	}

	

	res.push_back({ 1 });
	res.push_back({ 1, 1 });

	/*res[numRows - 1][0] = 1;
	res[numRows - 1][numRows - 1] = 1;

	for (int i = 3; i < numRows; ++i) {
		for (int j = 1; j < i; ++j) {
			res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
		}
	}*/

	for (int i = 2; i < numRows; i++) {
		vector<int>tmp;

		for (int j = 1; j < i; ++j) {
			tmp.push_back(res[i - 1][j - 1] + res[i - 1][j]);
		}

		tmp.push_back(1);
		tmp.insert(tmp.begin(), 1);

		res.push_back(tmp);
	}

	return res;
}

void xuat(vector<vector<int>> res, int n) {
	for (int i = 0; i < n; i++) {
		for (auto j : res[i]) {
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main() {


	int numRows = 2;
	int numRows1 = 5;

	 vector<vector<int>> res = generate(numRows);
	 vector<vector<int>> res1 = generate(numRows1);

	xuat(res, numRows);
	xuat(res1, numRows1);

	//vector<vector<int>> res1;

	//res1.push_back({ 1 });
	//res1.push_back({ 1, 1 });

	///*vector<int>tmp3;
	//tmp3.push_back(1);

	//res1.push_back(tmp3);

	//vector<int>tmp1;
	//tmp1.push_back(1);
	//tmp1.push_back(1);

	//res1.push_back(tmp1);*/

	//for (int i = 2; i < numRows1; ++i) {
	//	vector<int>tmp;

	//	tmp.push_back(1);

	//	for (int j = 1; j < i; ++j) {
	//		//cout << res1[i - 1][j - 1] << " " << res1[i - 1][j] << "\n";
	//		tmp.push_back(res1[i - 1][j - 1] + res1[i - 1][j]);
	//	}

	//	tmp.push_back(1);

	//	res1.push_back(tmp);
	//}

	//xuat(res1, numRows1);

	return 0;
}
