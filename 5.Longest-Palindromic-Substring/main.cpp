#include<iostream>
#include<string>
#include<vector>

using namespace std;


string longestPalindrome(string s) {
    if (s.empty()) return "";

    int n = s.length();
    string result = "";
    int start = 0; // Vị trí bắt đầu của chuỗi đối xứng dài nhất
    int maxLength = 1; // Độ dài của chuỗi đối xứng dài nhất

    vector<vector<bool>> F(n, vector<bool>(n, false));

    // Tất cả các chuỗi con có độ dài 1 đều là chuỗi đối xứng
    for (int i = 0; i < n; i++) {
        F[i][i] = true;
    }

    // Kiểm tra các chuỗi con có độ dài 2
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            F[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Kiểm tra các chuỗi con có độ dài lớn hơn 2
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (F[i + 1][j - 1] && s[i] == s[j]) {
                F[i][j] = true;
                if (len > maxLength) {
                    start = i;
                    maxLength = len;
                }
            }
        }
    }

    result = s.substr(start, maxLength);
    return result;
}


int main() {
	string s = "bb";

	cout << longestPalindrome(s) << "\n";


	return 0;
}