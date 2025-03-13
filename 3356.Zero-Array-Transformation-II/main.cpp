#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
{
    int n = nums.size();
    int sum = 0;
    int querryCount = 0;
    vector<int> diffArray(n + 1);

    for (int i = 0; i < n; ++i)
    {
        while (sum + diffArray[i] < nums[i])
        {
            querryCount++;
            if (querryCount > queries.size())
            {
                return -1;
            }

            int l = queries[querryCount - 1][0];
            int r = queries[querryCount - 1][1];
            int x = queries[querryCount - 1][2];

            if (r >= i)
            {
                diffArray[max(l, i)] += x;
                if (r + 1 < diffArray.size())
                {
                    diffArray[r + 1] -= x;
                }
            }
        }
        sum += diffArray[i];
    }
    return querryCount;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<vector<int>> queries = {{0, 4, 1}, {0, 3, 2}, {0, 2, 3}, {0, 1, 4}, {0, 0, 5}};
    cout << minZeroArray(nums, queries) << endl;

    return 0;
}