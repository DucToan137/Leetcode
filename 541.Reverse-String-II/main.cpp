#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string reverse(string s, int k)
{
    string res = "";
    string temp = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (i < k)
        {
            res += s[k - i - 1];
        }
        else
        {
            temp += s[i];
        }
    }

    return res + temp;
}

string reverseStr(string s, int k)
{
    vector<string> v;
    string result = "";
    string temp = "";

    int count = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (count == 2 * k)
        {
            v.push_back(temp);
            temp = "";
            count = 0;
        }
        temp += s[i];
        count++;
    }
    v.push_back(temp);

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].size() == 2 * k)
        {
            result += reverse(v[i], k);
        }
        else if (v[i].size() < 2 * k && v[i].size() >= k)
        {
            result += reverse(v[i], k);
        }
        else
        {
            result += reverse(v[i], v[i].size());
        }
    }

    return result;
}

int main()
{
    string s = "abcd";
    int k = 2;
    cout << reverseStr(s, k) << endl;

    return 0;
}