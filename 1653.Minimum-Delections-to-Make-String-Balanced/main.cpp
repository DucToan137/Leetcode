#include <iostream>
#include <string>

using namespace std;

int minimumDeletions(string s)
{
    int ans = 0;
    int count_b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
            count_b++;
        else
        {
            ans = min(ans + 1, count_b);
        }
    }
    return ans;
}

int main()
{
    string s = "aababbab";
    cout << minimumDeletions(s) << endl;

    string s1 = "bbaaaaabb";
    cout << minimumDeletions(s1) << endl;

    return 0;
}
