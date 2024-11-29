#include<iostream>
#include<vector>

using namespace std;

int sumOddIndex(string num) {
    int sum = 0;
    for (int i = 0; i < num.size(); i++) {
        if (i % 2 == 1) {
            sum += num[i] - '0';
        }
    }
    return sum;
}

int sumEvenIndex(string num) {
    int sum = 0;
    for (int i = 0; i < num.size(); i++) {
        if (i % 2 == 0) {
            sum += num[i] - '0';
        }
    }
    return sum;
}

bool isBalanced(string num) {
    return sumOddIndex(num) == sumEvenIndex(num);
}
    
    
int main() {
    string num = "1234";
    cout << isBalanced(num) << endl;
    return 0;
}