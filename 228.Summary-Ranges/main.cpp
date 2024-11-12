#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> res;
    if (nums.empty())
        return res;
    int start = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i + 1 == nums.size() || nums[i] + 1 != nums[i + 1])
        {
            if (start == i)
            {
                res.push_back(to_string(nums[start]));
            }
            else
            {
                res.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
            start = i + 1;
        }
    }
    return res;
}

int main()
{

    return 0;
}