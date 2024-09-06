#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;

    for (auto num : nums)
    {
        if (i == 0 || i == 1 || nums[i - 2] != num)
        {
            nums[i] = num;
            i++;
        }
    }
    return i;
}

int main()
{

    return 0;
}