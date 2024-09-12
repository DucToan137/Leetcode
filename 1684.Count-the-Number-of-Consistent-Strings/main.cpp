#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    unordered_map<char, int> mapAllowed;
    for (char c : allowed)
    {
        mapAllowed[c] = 1;
    }

    int count = 0;
    for (string word : words)
    {
        bool isConsistent = true;
        for (char c : word)
        {
            if (mapAllowed.find(c) == mapAllowed.end())
            {
                isConsistent = false;
                break;
            }
        }
        if (isConsistent)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    return 0;
}