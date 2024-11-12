#include <iostream>
#include <vector>

using namespace std;

vector<int> stableMountains(vector<int> &height, int threshold)
{
    vector<int> res;
    for (int i = 1; i < height.size(); ++i)
    {
        if (height[i - 1] > threshold)
        {
            res.push_back(i);
        }
    }
    return res;
}

int main()
{
    vector<int> height = {1, 2, 3, 4, 5};
    int threshold = 2;

    vector<int> res = stableMountains(height, threshold);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}