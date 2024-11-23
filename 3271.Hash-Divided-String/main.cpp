#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int sumHash(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - 'a';
    }
    return sum;
}

string stringHash(string s, int k)
{
    string res = "";

    for (int i = 0; i < s.size(); i += k)
    {
        string temp = s.substr(i, k);
        int sum = sumHash(temp);
        res += (sum % 26) + 'a';
    }

    return res;
}

int main()
{
    string s = "abcd";
    cout << stringHash(s, 2) << endl;

    return 0;
}