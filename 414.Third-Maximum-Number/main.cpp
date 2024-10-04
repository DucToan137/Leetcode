#include <iostream>
#include <vector>
#include <map>

using namespace std;

int thirdMax(vector<int> &nums)
{
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    nums.clear();
    int i = 0;
    for (auto item : m)
    {
        nums.push_back(item.first);
    }

    if (nums.size() < 3)
    {
        return nums[nums.size() - 1];
    }
    else
    {
        return nums[nums.size() - 3];
    }
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << thirdMax(nums) << endl;
    return 0;
}