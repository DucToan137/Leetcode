#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Solution 1
// bool isAnagrams(string str, string temp)
// {
//     if (str.size() != temp.size())
//     {
//         return false;
//     }
//     unordered_map<char, int> map;
//     for (int i = 0; i < str.size(); i++)
//     {
//         map[str[i]]++;
//         map[temp[i]]--;
//     }
//     for (auto it = map.begin(); it != map.end(); it++)
//     {
//         if (it->second != 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// vector<vector<string>> groupAnagrams(vector<string> &strs)
// {
//     vector<vector<string>> result;

//     for (int i = 0; i < strs.size(); i++)
//     {
//         bool isAnagram = false;
//         for (int j = 0; j < result.size(); j++)
//         {
//             if (isAnagrams(strs[i], result[j][0]))
//             {
//                 result[j].push_back(strs[i]);
//                 isAnagram = true;
//                 break;
//             }
//         }
//         if (!isAnagram)
//         {
//             result.push_back({strs[i]});
//         }
//     }
//     return result;
// }

// Solution 2
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;

    for (auto x : strs)
    {
        string word = x;
        sort(word.begin(), word.end());
        mp[word].push_back(x);
    }

    vector<vector<string>> res;
    for (auto x : mp)
    {
        res.push_back(x.second);
    }
    return res;
}

int main()
{

    return 0;
}