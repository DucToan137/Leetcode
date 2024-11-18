#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> largestLocal(vector<vector<int>> &grid)
{
    int n = grid.size();
    vector<vector<int>> maxLocal(n - 2, vector<int>(n - 2, 0));

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            maxLocal[i][j] = *max_element(grid[i].begin() + j, grid[i].begin() + j + 3);
            maxLocal[i][j] = max(maxLocal[i][j], *max_element(grid[i + 1].begin() + j, grid[i + 1].begin() + j + 3));
            maxLocal[i][j] = max(maxLocal[i][j], *max_element(grid[i + 2].begin() + j, grid[i + 2].begin() + j + 3));
        }
    }

    return maxLocal;
}

void printMatrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {9, 9, 8, 1},
        {5, 6, 2, 6},
        {8, 2, 6, 4},
        {6, 2, 2, 2},
    };

    vector<vector<int>> res = largestLocal(matrix);
    printMatrix(res);

    return 0;
}