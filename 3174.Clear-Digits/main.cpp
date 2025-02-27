#include <iostream>
#include <string>

using namespace std;

string clearDigits(string s)
{
    size_t pos = s.find_first_of("0123456789");
    while (pos != string::npos)
    {
        if (pos > 0)
        {
            s.erase(pos - 1, 2);
        }
        else
        {
            s.erase(pos, 1);
        }
        pos = s.find_first_of("0123456789");
    }
    return s;
}

int main()
{
    string s = "cb";
    cout << clearDigits(s);
    return 0;
}