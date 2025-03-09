#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maximumNumberOfStringPairs(vector<string> &words)
{
    unordered_map<string, int> m;
    int res = 0;
    for (string &word : words)
    {
        string key = word;
        sort(key.begin(), key.end());
        m[key]++;
    }

    for (auto i : m)
    {
        if (i.second > 1)
        {
            res++;
        }
    }

    return res;
}

int main()
{
    vector<string> words = {"ab", "ba", "cd", "dc", "ef", "fe"};
    cout << maximumNumberOfStringPairs(words) << endl;
    return 0;
}