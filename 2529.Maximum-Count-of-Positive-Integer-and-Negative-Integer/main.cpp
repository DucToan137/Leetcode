#include <iostream>
#include <vector>

using namespace std;

int maximumCount(vector<int> &nums)
{
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            pos++;
        }
        else if (nums[i] < 0)
        {
            neg++;
        }
    }
    return pos > neg ? pos : neg;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, -1, -2, -3, -4, -5};
    cout << maximumCount(nums) << endl;
    return 0;
}