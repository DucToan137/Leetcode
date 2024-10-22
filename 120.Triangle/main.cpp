#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    int res = 0;

    for (int i = triangle.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            triangle[i - 1][j] += min(triangle[i][j], triangle[i][j + 1]);
        }
    }

    return triangle[0][0];
}

int main()
{

    vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(triangle) << endl;

    return 0;
}