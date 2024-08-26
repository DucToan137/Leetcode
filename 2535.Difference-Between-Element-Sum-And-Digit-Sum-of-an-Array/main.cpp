#include <iostream>
#include <vector>

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

int sumOfArray(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum;
}

int differenceOfSum(vector<int> &nums)
{
    int sumArray = sumOfArray(nums);
    int sumDigits = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sumDigits += sumOfDigits(nums[i]);
    }
    return sumArray - sumDigits;
}

int main()
{

    return 0;
}
