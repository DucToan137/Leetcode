#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool checkCommonChar(vector<int> &a, vector<int> &b)
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0 && b[i] > 0)
            return true;
    }

    return false;
}

int maxProduct(vector<string> &words)
{
    int n = words.size();
    int res = 0;
    vector<vector<int>> V(n, vector<int>(26, 0));
    for (int i = 0; i < n; i++)
    {

        for (auto ch : words[i])
            V[i][ch - 'a']++;

        for (int j = 0; j < i; j++)
        {
            if (!checkCommonChar(V[i], V[j]))
            {
                int size = words[i].size() * words[j].size();
                res = max(res, size);
            }
        }
    }

    return res;
}

int main()
{
    vector<string> words = {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
    cout << maxProduct(words) << endl;
    return 0;
}