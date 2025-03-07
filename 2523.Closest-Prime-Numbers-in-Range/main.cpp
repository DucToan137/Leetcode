#include <iostream>
#include <vector>

using namespace std;

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

vector<int> closestPrimes(int left, int right)
{
    vector<int> temp;
    for (int i = left; i <= right; ++i)
    {
        if (isPrime(i))
        {
            temp.push_back(i);
        }
    }

    if (temp.size() < 2)
    {
        return {-1, -1};
    }

    int minDiff = INT_MAX;
    vector<int> result;
    for (int i = 0; i < temp.size() - 1; ++i)
    {
        if (temp[i + 1] - temp[i] < minDiff)
        {
            minDiff = temp[i + 1] - temp[i];
            result = {temp[i], temp[i + 1]};
        }
    }

    return result;
}

int main()
{
    vector<int> result = closestPrimes(4, 6);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}