#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    map<int, int> map;
    for (auto &item : items1)
    {
        map[item[0]] += item[1];
    }
    for (auto &item : items2)
    {
        map[item[0]] += item[1];
    }
    vector<vector<int>> res;
    for (auto &item : map)
    {
        res.push_back({item.first, item.second});
    }
    return res;
}

int main()
{
    vector<vector<int>> items1 = {{1, 2}, {2, 3}, {3, 4}};
    vector<vector<int>> items2 = {{1, 3}, {2, 4}, {4, 5}};
    vector<vector<int>> res = mergeSimilarItems(items1, items2);
    for (auto &item : res)
    {
        cout << item[0] << " " << item[1] << endl;
    }
    return 0;
}