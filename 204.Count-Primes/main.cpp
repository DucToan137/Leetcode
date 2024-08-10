#include <iostream>
#include <vector>
using namespace std;

// Solution 1
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int countPrimes(int n)
// {
//     int count = 0;

//     for (int i = 2; i < n; ++i)
//     {
//         if (isPrime(i))
//         {
//             count++;
//         }
//     }

//     return count;
// }

int countPrimes(int n)
{
    // vector<bool> pr(n + 1, true);
    vector<int> pr(n + 1);
    for (int i = 2; i < n; i++)
        pr[i] = 1;
    // pr[0] = pr[1] = 0;
    int count = 0;
    for (int i = 2; i * i < n; ++i)
    {
        if (pr[i] == 1)
        {
            for (int j = i * i; j < n; j += i)
            {
                pr[j] = 0;
            }
        }
    }
    for (int k = 2; k < n; k++)
    {
        if (pr[k] == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}