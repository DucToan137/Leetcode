#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    unordered_map<string, int> map;
    for (int i = 0; i < list1.size(); i++)
    {
        map[list1[i]] = i;
    }

    vector<string> res;
    int minSum = INT_MAX;

    for (int i = 0; i < list2.size(); i++)
    {
        if (map.find(list2[i]) != map.end())
        {
            if (i + map[list2[i]] < minSum)
            {
                res.clear();
                res.push_back(list2[i]);
                minSum = i + map[list2[i]];
            }
            else if (i + map[list2[i]] == minSum)
            {
                res.push_back(list2[i]);
            }
        }
    }

    return res;
}

int main()
{

    return 0;
}