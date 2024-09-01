#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
{

    if (m * n != original.size())
        return {};

    int i = 0;
    vector<vector<int>> res;

    for (int j = 0; j < m; j++)
    {
        vector<int> temp;
        for (int k = 0; k < n; k++)
        {
            if (i < original.size())
            {
                temp.push_back(original[i]);
                i++;
            }
            else
            {
                res.push_back(temp);
                return res;
            }
        }
        res.push_back(temp);
    }

    return res;
}

int main()
{

    vector<int> original = {1, 2, 3, 4};
    int m = 2, n = 2;
    vector<vector<int>> res = construct2DArray(original, m, n);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}