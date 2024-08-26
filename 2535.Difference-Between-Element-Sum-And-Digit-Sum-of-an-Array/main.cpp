#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int differenceOfSum(vector<int> &nums)
{
    int sumArray = 0;
    int sumDigits = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sumDigits += sumOfDigits(nums[i]);
        sumArray += nums[i];
    }
    return abs(sumArray - sumDigits);
}

int main()
{

    return 0;
}
