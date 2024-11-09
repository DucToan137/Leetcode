#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    unordered_map<string, int> rule = {{"type", 0}, {"color", 1}, {"name", 2}};

    int res = 0;
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i][rule[ruleKey]] == ruleValue)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    return 0;
}
