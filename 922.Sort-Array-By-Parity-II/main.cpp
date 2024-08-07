#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortArrayByParityII(vector<int> &nums)
{
    vector<int> res(nums.size());

    sort(nums.begin(), nums.end());

    int k = 0;
    int j = 1;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] % 2 == 0)
        {
            res[k] = nums[i];
            k += 2;
        }
        else
        {
            res[j] = nums[i];
            j += 2;
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {4, 2, 5, 7};
    vector<int> res = sortArrayByParityII(nums);
    for (auto i : res)
    {
        cout << i << " ";
    }
    return 0;
}
