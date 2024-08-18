#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isElement(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count > 2)
        {
            return false;
        }
    }
    return true;
}

bool isUglyNumber(int n)
{
    int flag = 0;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isElement(i))
            {
                if (i != 2 && i != 3 && i != 5)
                {
                    flag = 1;
                    break;
                }
            }
            n = n / i;
        }
    }

    if (flag == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// int nthUglyNumber(int n)
// {
//     for (int i = 1; i < INT_MAX; i++)
//     {
//         if (isUglyNumber(i))
//         {
//             n--;
//         }
//         if (n == 0)
//         {
//             return i;
//         }
//     }
// }

// Solution 2
int nthUglyNumber(int n)
{

    vector<int> dp(n);
    dp[0] = 1;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;

    for (int i = 1; i < n; i++)
    {

        int twoMul = dp[p1] * 2;
        int threeMul = dp[p2] * 3;
        int fiveMul = dp[p3] * 5;

        dp[i] = min(twoMul, min(threeMul, fiveMul));

        if (dp[i] == twoMul)
            p1++;
        if (dp[i] == threeMul)
            p2++;
        if (dp[i] == fiveMul)
            p3++;
    }

    return dp[n - 1];
}

int main()
{
    int n = 10;
    // cout << isUglyNumber(n) << endl;
    cout << nthUglyNumber(n) << endl;
    return 0;
}