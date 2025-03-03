#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> sumById(vector<vector<int>> &nums)
{
    map<int, int> m;
    for (auto &row : nums)
    {
        m[row[0]] += row[1];
    }

    vector<vector<int>> result;
    for (auto &p : m)
    {
        result.push_back({p.first, p.second});
    }
    return result;
}

vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
{
    map<int, int> m;
    for (auto &row : nums1)
    {
        m[row[0]] += row[1];
    }
    for (auto &row : nums2)
    {
        m[row[0]] += row[1];
    }

    vector<vector<int>> result;
    for (auto &p : m)
    {
        result.push_back({p.first, p.second});
    }
    return result;
}

int main()
{
    // vector<vector<int>> nums = {{1, 2}, {4, 5}, {7, 8}, {1, 4}};
    // vector<vector<int>> result = sumById(nums);
    // for (auto &row : result)
    // {
    //     for (int i = 0; i < row.size(); ++i)
    //     {
    //         cout << row[i] << " ";
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> nums1 = {{1, 2}, {2, 3}, {4, 5}};
    vector<vector<int>> nums2 = {{1, 4}, {3, 2}, {4, 1}};
    vector<vector<int>> result = mergeArrays(nums1, nums2);
    for (auto &row : result)
    {
        for (int i = 0; i < row.size(); ++i)
        {
            cout << row[i] << " ";
        }
        cout << endl;
    }
    return 0;
}