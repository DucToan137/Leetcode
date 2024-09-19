#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] > nums[i + 1])
            {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
}

int main()
{

    return 0;
}