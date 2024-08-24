#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int i = 0;
    vector<int> res;
    while (i < nums.size())
    {
        if (nums[i] != nums[nums[i] - 1])
        {
            swap(nums[i], nums[nums[i] - 1]);
        }
        else
            i++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i + 1)
            res.push_back(i + 1);
    }
    return res;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> res = findDisappearedNumbers(nums);

    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}