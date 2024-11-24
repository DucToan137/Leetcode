#include<iostream>
#include<vector>

using namespace std;

int sumFromMToN(int m, int n) {
    return (m + n) * (n - m + 1) / 2;
}

int pivotInteger(int n) {
    int res = 0;
    int sum = 0;
    
    for(int i = 1; i <= n; i++) {
        if(sumFromMToN(res, i) == sumFromMToN(i, n)) {
            return i;
        }
    }

    return -1;        
}

int main(){
    int n = 8;
    cout << pivotInteger(n) << endl;
    return 0;
}