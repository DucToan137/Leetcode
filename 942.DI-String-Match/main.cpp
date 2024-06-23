#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> diStringMatch(string s) {
    int n = s.size();
    vector<int> res(n + 1);
    int low = 0, high = n;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'I') {
            res[i] = low++;
        }
        else {
            res[i] = high--;
        }
    }
    res[n] = low;

    return res;
}

void print(vector<int> res) {
	for (int i = 0; i < res.size(); ++i) {
		cout << res[i] << " ";
	}
	cout << endl;
}

int main() {

	string s = "IDID";
	vector<int> res = diStringMatch(s);
	print(res);

	return 0;
}