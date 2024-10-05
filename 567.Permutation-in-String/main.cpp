#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool checkInclusion(string s1, string s2)
{
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    for (auto c : s1)
    {
        m2[c]++;
    }

    int i = 0;
    int j = 0;
    int n1 = s1.size();
    int n2 = s2.size();

    while (j < n2)
    {
        m1[s2[j++]]++;
        if (j - i == n1)
        {
            if (m1 == m2)
            {
                return true;
            }
            m1[s2[i]]--;
            if (m1[s2[i]] == 0)
            {
                m1.erase(s2[i]);
            }
            i++;
        }
    }
    return false;
}

int main()
{

    string s1 = "ab";
    string s2 = "eidbaooo";
    checkInclusion(s1, s2);
    return 0;
}