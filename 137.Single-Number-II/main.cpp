#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> numCount;

    for (int num : nums)
    {
        numCount[num]++;
    }

    for (auto it = numCount.begin(); it != numCount.end(); it++)
    {
        if (it->second == 1)
        {
            return it->first;
        }
    }

    return -1;
}

int main()
{

    return 0;
}