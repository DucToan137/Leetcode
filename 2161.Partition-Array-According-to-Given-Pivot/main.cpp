#include <iostream>
#include <vector>

using namespace std;

vector<int> pivotArray(vector<int> &nums, int pivot)
{
    vector<int> res(nums.size());
    int idx = 0;

    for (int i : nums)
    {
        if (i < pivot)
        {
            res[idx++] = i;
        }
    }

    for (int i : nums)
    {
        if (i == pivot)
        {
            res[idx++] = i;
        }
    }

    for (int i : nums)
    {
        if (i > pivot)
        {
            res[idx++] = i;
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> result = pivotArray(nums, pivot);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}