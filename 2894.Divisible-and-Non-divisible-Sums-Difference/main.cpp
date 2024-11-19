#include <iostream>
#include <vector>

using namespace std;

int differenceOfSums(int n, int m)
{
    int sumDivisible = 0;
    int sumNonDivisible = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            sumDivisible += i;
        }
        else
        {
            sumNonDivisible += i;
        }
    }

    return sumNonDivisible - sumDivisible;
}

int main()
{

    return 0;
}