#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b)
{
    string result = "";

    int alen = a.length();
    int blen = b.length();
    int i = 0;
    int carry = 0;

    while (i < alen || i < blen || carry == 1)
    {
        int x = 0;
        if (i < alen && a[alen - i - 1] == '1')
        {
            x = 1;
        }
        int y = 0;
        if (i < blen && b[blen - i - 1] == '1')
        {
            y = 1;
        }
        result = to_string((x + y + carry) % 2) + result;
        carry = (x + y + carry) / 2;
        i++;
    }

    return result;
}

int main()
{

    return 0;
}