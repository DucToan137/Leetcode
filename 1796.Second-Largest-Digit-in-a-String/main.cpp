#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int secondHighest(string s)
{
    vector<int> nums;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            nums.push_back(s[i] - '0');
        }
    }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     cout << nums[i] << " ";
    // }

    sort(nums.begin(), nums.end());

    int flag = 0;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] != nums[nums.size() - 1])
        {
            flag = 1;
            return nums[i];
        }
    }
    return -1;
}

int main()
{
    string s = "dfa12321afd";
    cout << secondHighest(s) << endl;
    return 0;
}
