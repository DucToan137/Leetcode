#include <iostream>
#include <vector>

using namespace std;

vector<int> leftRightDifference(vector<int> &nums)
{
    vector<int> res;
    vector<int> left(nums.size(), 0);
    vector<int> right(nums.size(), 0);

    for (int i = 0; i < nums.size() - 1; ++i)
    {
        left[i + 1] = left[i] + nums[i];
        right[i + 1] = right[i] + nums[nums.size() - 1 - i];
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        res.push_back(abs(left[i] - right[nums.size() - 1 - i]));
    }

    return res;
}

int main()
{
    vector<int> nums = {1};
    vector<int> res = leftRightDifference(nums);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}