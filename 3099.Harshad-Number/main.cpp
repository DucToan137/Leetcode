#include<iostream>
#include<vector>

using namespace std;

int sumOfDigit(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = sumOfDigit(x);
    return x % sum == 0 ? sum : -1;        
}

int main(){
    int x = 18;
    cout << sumOfTheDigitsOfHarshadNumber(x) << endl;
    
    return 0;
}