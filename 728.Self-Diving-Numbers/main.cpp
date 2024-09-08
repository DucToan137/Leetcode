#include <iostream>
#include <vector>

using namespace std;

bool isSelfDividingNumber(int num)
{
    int n = num;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0 || num % digit != 0)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> result;
    for (int i = left; i <= right; i++)
    {
        if (isSelfDividingNumber(i))
        {
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    vector<int> result = selfDividingNumbers(1, 22);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}