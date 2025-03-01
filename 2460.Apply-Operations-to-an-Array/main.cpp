#include <iostream>
#include <vector>

using namespace std;

vector<int> applyOperations(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; ++i)
    {
        if (nums[i] == nums[i + 1])
        {
            nums[i] = 2 * nums[i];
            nums[i + 1] = 0;
        }
    }

    int zero = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != 0)
        {
            nums[zero++] = nums[i];
        }
    }

    while (zero < nums.size())
    {
        nums[zero++] = 0;
    }
    return nums;
}

int main()
{
    vector<int> nums = {847, 847, 0, 0, 0, 399, 416, 416, 879, 879, 206, 206, 206, 272};
    vector<int> result = applyOperations(nums);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    return 0;
}