#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

	for (int i = 0; i < image.size();++i) {
		reverse(image[i].begin(), image[i].end());
		for (int j = 0; j < image[i].size(); ++j) {
			if (image[i][j] == 0) {
				image[i][j] = 1;
			}
			else {
				image[i][j] = 0;
			}
		}
	}

	return image;
}


void print(vector<vector<int>> v) {
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {

	vector<vector<int>> image = { {1,1,0},{1,0,1},{0,0,0} };
	flipAndInvertImage(image);
	print(image);

	return 0;
}