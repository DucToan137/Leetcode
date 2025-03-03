#include <iostream>

using namespace std;

int reverse(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

bool isSameAfterReversals(int num)
{
    int temp = reverse(num);
    return num == reverse(temp);
}

int main()
{
    int n = 526;
    cout << isSameAfterReversals(n) << endl;
    return 0;
}