#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int num : nums)
    {
        freq[num]++;
    }

    sort(nums.begin(), nums.end(), [&](int a, int b)
         { return freq[a] == freq[b] ? a > b : freq[a] < freq[b]; });
    return nums;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    vector<int> res = frequencySort(nums);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}