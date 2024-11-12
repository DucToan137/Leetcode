#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findArray(vector<int> &pref)
{
    int temp = pref[0];
    vector<int> res;
    res.push_back(temp);

    for (int i = 1; i < pref.size(); ++i)
    {
        int temp1 = temp ^ pref[i];
        temp = pref[i];
        res.push_back(temp1);
    }

    return res;
}

int main()
{
    vector<int> pref = {5, 2, 0, 3, 1};
    vector<int> res = findArray(pref);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}