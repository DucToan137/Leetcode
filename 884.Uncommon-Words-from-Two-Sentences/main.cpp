#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

vector<string> uncommonFromSentences(string s1, string s2)
{
    unordered_map<string, int> m;
    vector<string> res;
    stringstream ss(s1 + " " + s2);
    string word;
    while (ss >> word)
    {
        m[word]++;
    }
    for (auto &i : m)
    {
        if (i.second == 1)
        {
            res.push_back(i.first);
        }
    }
    return res;
}

int main()
{

    return 0;
}