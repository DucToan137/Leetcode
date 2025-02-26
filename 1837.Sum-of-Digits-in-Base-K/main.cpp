#include <iostream>

using namespace std;

int sumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int convertToBaseK(int n, int k)
{
    int result = 0;
    int base = 1;
    while (n > 0)
    {
        result += (n % k) * base;
        n /= k;
        base *= 10;
    }
    return result;
}

int sumBase(int n, int k)
{
    cout << convertToBaseK(n, k) << endl;
    return sumDigits(convertToBaseK(n, k));
}

int main()
{
    cout << sumBase(34, 6) << endl; // 9
    return 0;
}