#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Solution 1: O(n^2)
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = 0; j < nums.size(); ++j)
        {
            if (i != j && nums[i] == nums[j] && abs(i - j) <= k)
            {
                return true;
            }
        }
    }
    return false;
}

// Solution 2: O(n)
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        // mp.count() will tell whatever ith index that I want, have I seen it before?
        if (mp.count(nums[i]))
        {
            // if I have already seen this number, then check for condition abs(i - j) <= k
            if (abs(i - mp[nums[i]]) <= k)
                return true;
        }
        // if I have not seen this number before, insert the number with its position in the map
        // and if the number is already present in the map, then update the position of that number
        mp[nums[i]] = i;
    }
    // after the complete traversal, if we don't find a pair to satisfy the condition, return false
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    cout << containsNearbyDuplicate(nums, k) << endl;

    return 0;
}