#include <iostream>
#include <vector>

using namespace std;

// solution 1
vector<int> sumIndex(vector<int> &nums, int index)
{
    vector<int> res;
    int sumLeft = 0;
    int sumRight = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i < index)
        {
            sumLeft += nums[i];
        }
        if (i > index)
        {
            sumRight += nums[i];
        }
    }

    res.push_back(sumLeft);
    res.push_back(sumRight);

    return res;
}

// int pivotIndex(vector<int> &nums)
// {
//     int left = 0;
//     int right = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         vector<int> res = sumIndex(nums, i);
//         left = res[0];
//         right = res[1];
//         if (left == right)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int pivotIndex(vector<int> &nums)
{
    int totalSum = 0;

    int leftSum = 0;

    int rightSum;

    int result = -1;
    for (auto i : nums)
        totalSum += i;
    for (int i = 0; i < nums.size(); i++)
    {
        rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums) << endl;

    vector<int> nums2 = {1, 2, 3};
    cout << pivotIndex(nums2) << endl;

    vector<int> nums3 = {2, 1, -1};
    cout << pivotIndex(nums3) << endl;

    return 0;
}
