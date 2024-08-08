#include <iostream>
#include <vector>

using namespace std;

// Solution 1: O(n)
// vector<int> searchRange(vector<int> &nums, int target)
// {
//     vector<int> res = {-1, -1};

//     for (int i = 0; i < nums.size(); ++i)
//     {
//         if (nums[i] == target)
//         {
//             res[0] = i;
//             break;
//         }
//     }

//     for (int i = nums.size() - 1; i >= 0; --i)
//     {
//         if (nums[i] == target)
//         {
//             res[1] = i;
//             break;
//         }
//     }

//     return res;
// }

// Solution 2: O(logn)
int binarySearch(vector<int> &nums, int target, bool leftBias)
{
    int l = 0, r = nums.size() - 1;
    int i = -1;

    while (l <= r)
    {
        int m = (l + r) / 2;
        if (target > nums[m])
        {
            l = m + 1;
        }
        else if (target < nums[m])
        {
            r = m - 1;
        }
        else
        {
            i = m;
            if (leftBias)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
    }

    return i;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result;
    int left = binarySearch(nums, target, true);
    int right = binarySearch(nums, target, false);
    result.push_back(left);
    result.push_back(right);
    return result;
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> res = searchRange(nums, target);

    for (auto i : res)
    {
        cout << i << " ";
    }

    return 0;
}
