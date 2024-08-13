#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> separateDigits(vector<int> &nums)
{
    vector<int> res;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int num = nums[i];
        while (num > 0)
        {
            res.push_back(num % 10);
            num /= 10;
        }
    }

    reverse(res.begin(), res.end());

    return res;
}

int main()
{
    vector<int> nums = {123, 456, 789};
    vector<int> res = separateDigits(nums);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
