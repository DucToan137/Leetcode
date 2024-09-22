#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> getSneakyNumbers(vector<int> &nums)
{
    vector<int> res;
    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
        if (m[nums[i]] == 2)
        {
            res.push_back(nums[i]);
        }
    }

    return res;
}

int main()
{

    return 0;
}