#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int findPermutationDifference(string s, string t)
{
    unordered_map<char, int> sMap;
    unordered_map<char, int> tMap;

    for (int i = 0; i < s.size(); i++)
    {
        sMap[s[i]] = i;
        tMap[t[i]] = i;
    }

    int diff = 0;
    for (int i = 0; i < s.size(); i++)
    {
        diff += abs(sMap[s[i]] - tMap[s[i]]);
    }
    return diff;
}

int main()
{

    return 0;
}