#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums;
    nums.insert(nums.end(), nums1.begin(), nums1.end());
    nums.insert(nums.end(), nums2.begin(), nums2.end());
    sort(nums.begin(), nums.end());

    for (int i : nums)
    {
        cout << i << " ";
    }

    int n = nums.size();

    if (n % 2 == 0)
    {
        return (nums[n / 2] + nums[n / 2 - 1]) / 2.0;
    }
    else
    {
        return nums[n / 2];
    }
}

int main()
{

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double result = findMedianSortedArrays(nums1, nums2);
    cout << result << endl;

    return 0;
}