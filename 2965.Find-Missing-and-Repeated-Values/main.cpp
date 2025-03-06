#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    vector<int> res;
    map<int, int> map;
    int count = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            map[grid[i][j]]++;
            if (map[grid[i][j]] == 2)
            {
                res.push_back(grid[i][j]);
            }
            count++;
        }
    }

    for (int i = 1; i <= count; ++i)
    {
        if (map[i] == 0)
        {
            res.push_back(i);
        }
    }

    return res;
}

int main()
{
    vector<vector<int>> grid1 = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    vector<int> res1 = findMissingAndRepeatedValues(grid1);
    for (int i = 0; i < res1.size(); i++)
    {
        cout << res1[i] << " ";
    }
    return 0;
}