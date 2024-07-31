#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isHappy(int n)
{
    unordered_set<int> s;
    while (true)
    {
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }

        if (sum == 1)
            return true;

        if (s.find(sum) != s.end())
            return false;
        s.insert(sum);

        n = sum;
    }
}

int main()
{

    int n = 14;
    cout << isHappy(n) << endl;
    return 0;
}