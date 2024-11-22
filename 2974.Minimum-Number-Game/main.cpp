#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

vector<int> numberGame(vector<int> &nums)
{
    vector<int> res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i += 2)
    {
        res.push_back(nums[i + 1]);
        res.push_back(nums[i]);
        }

    return res;
}

int main()
{
    vector<int> nums = {5, 4, 2, 3};
    vector<int> res = numberGame(nums);

    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << " ";
    }
    return 0;
}