#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Solution 1
// int value(string s)
// {
//     int c = 0;
//     int n = 0;
//     for (int i = 0; i < s.size(); ++i)
//     {
//         if (isalpha(s[i]))
//         {
//             c = 1;
//         }
//         else
//         {
//             n = 1;
//         }
//         if (c == 1 && n == 1)
//         {
//             return s.length();
//         }
//     }
//     if (c == 1)
//     {
//         return s.length();
//     }
//     if (n == 1)
//     {
//         return stoi(s);
//     }
//     return -1;
// }

// int maximumValue(vector<string> &strs)
// {
//     int max = value(strs[0]);
//     for (int i = 1; i < strs.size(); ++i)
//     {
//         int temp = value(strs[i]);
//         if (temp > max)
//         {
//             max = temp;
//         }
//     }
//     return max;
// }

int maximumValue(vector<string> &strs)
{
    int result = INT_MIN;
    for (auto it : strs)
    {
        bool flag = true;
        int n = it.size();
        for (char ch : it)
        {
            if (isalpha(ch))
            {
                result = max(result, n);
                flag = false;
                break;
            }
        }
        if (flag)
        {
            result = max(result, stoi(it));
        }
    }
    return result;
}

int main()
{
    vector<string> strs = {"alic3", "bob", "3", "4", "00000"};
    cout << maximumValue(strs) << endl;

    return 0;
}