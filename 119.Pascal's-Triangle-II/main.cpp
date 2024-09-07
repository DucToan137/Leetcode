#include <iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex)
{
    if (rowIndex == 0)
    {
        return {1};
    }

    vector<int> res = {1, 1};

    for (int i = 2; i <= rowIndex; i++)
    {
        vector<int> temp = {1};
        for (int j = 1; j < res.size(); j++)
        {
            temp.push_back(res[j - 1] + res[j]);
        }
        temp.push_back(1);
        res = temp;
    }

    return res;
}

int main()
{
    vector<int> res = getRow(0);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}