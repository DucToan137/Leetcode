#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    vector<vector<int>> res;
    int n = nums.size();

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    while (!mp.empty())
    {
        vector<int> temp;
        for (auto it = mp.begin(); it != mp.end();)
        {
            if (it->second > 0)
            {
                temp.push_back(it->first);
                it->second--;
                if (it->second == 0)
                {
                    it = mp.erase(it);
                }
                else
                {
                    ++it;
                }
            }
            else
            {
                ++it;
            }
        }
        res.push_back(temp);
    }

    return res;
}

int main()
{
    vector<int> nums = {1, 3, 4, 1, 2, 3, 1};
    vector<vector<int>> res = findMatrix(nums);
    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}