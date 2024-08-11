#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int heightChecker(vector<int> &heights)
{
    int res = 0;
    vector<int> expected = heights;
    sort(expected.begin(), expected.end());

    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != expected[i])
        {
            res++;
        }
    }
    return res;
}

int main()
{

    vector<int> heights = {1, 1, 4, 2, 1, 3};
    cout << heightChecker(heights) << endl;

    return 0;
}