#include<iostream>
#include<string>
#include<vector>

using namespace std;

string restoreString(string s, vector<int>& indices) {
	string res = s;

	for(int i :indices) {
		//res += s[indices[i]];
		res[indices[i]] = s[i];
	}

	return res;
}

int main() {

	vector<int> indices = { 4,5,6,7,0,2,1,3 };
	string s = "codeleet";
	cout << restoreString(s, indices);

	return 0;
}
