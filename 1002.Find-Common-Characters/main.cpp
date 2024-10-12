#include <iostream>
#include <vector>

using namespace std;

vector<string> commonChars(vector<string> &words)
{
    int n = words.size();
    vector<int> hashMap(26, 0);

    for (int i = 0; i < words[0].size(); ++i)
    {
        hashMap[words[0][i] - 'a']++;
    }

    for (int i = 1; i < n; ++i)
    {
        vector<int> temp(26, 0);
        for (int j = 0; j < words[i].size(); ++j)
        {
            temp[words[i][j] - 'a']++;
        }

        for (int j = 0; j < 26; ++j)
        {
            hashMap[j] = min(hashMap[j], temp[j]);
        }
    }

    vector<string> result;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < hashMap[i]; ++j)
        {
            result.push_back(string(1, 'a' + i));
        }
    }

    return result;
}

int main()
{
    return 0;
}