#include <iostream>
#include <vector>

using namespace std;

int countDigit(int num)
{
    int count = 0;
    while (num)
    {
        num /= 10;
        count++;
    }
    return count;
}

int findNumbers(vector<int> &nums)
{
    int count = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (countDigit(nums[i]) % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << findNumbers(nums) << endl;
    return 0;
}