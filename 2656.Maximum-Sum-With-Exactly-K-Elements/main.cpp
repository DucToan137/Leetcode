#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximizeSum(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int sum = nums[nums.size() - 1];
    int temp = nums[nums.size() - 1];
    for (int i = 1; i < k; ++i)
    {
        sum += temp + i;
    }
    return sum;
}

int main()
{
    vector<int> nums = {5, 5, 5};
    int k = 2;
    cout << maximizeSum(nums, k);
    return 0;
}