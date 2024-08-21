#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countElements(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > nums[0] && nums[i] < nums[nums.size() - 1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums = {-3, 3, 3, 9};
    cout << countElements(nums) << endl;

    return 0;
}