#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int minLength(string s)
{
    if (s.find("AB") == string::npos && s.find("CD") == string::npos)
        return s.size();
    else
    {
        while (s.find("AB") != string::npos || s.find("CD") != string::npos)
        {
            if (s.find("AB") != string::npos)
                s.erase(s.find("AB"), 2);
            if (s.find("CD") != string::npos)
                s.erase(s.find("CD"), 2);
        }
        return s.size();
    }
}

int main()
{
    string s = "ABFCACDB";
    cout << minLength(s) << endl;
    return 0;
}