#include <iostream>
#include <vector>
#include <string>

using namespace std;

string vectorToString(vector<int> &num)
{
    string s = "";
    for (int i = 0; i < num.size(); i++)
    {
        s += to_string(num[i]);
    }
    return s;
}

string Tong(string a, string b)
{

    // a = 0
    if (a == "0")
    {
        return b;
    }

    string result = "";

    // a, b > 0
    long n1 = a.length();
    long n2 = b.length();
    long nho = 0;
    long tong = 0;
    long i = 0;

    if (n1 > n2)
    {
        b.insert(0, n1 - n2, '0');
    }
    if (n1 < n2)
    {
        a.insert(0, n2 - n1, '0');
    }

    result = a;

    for (i = a.length() - 1; i >= 0; i--)
    {
        tong = (a[i] - '0') + (b[i] - '0') + nho;
        nho = tong / 10;
        tong = tong % 10;
        result[i] = tong + '0';
    }

    if (nho > 0)
    {
        result.insert(0, 1, nho + '0');
    }

    return result;
}

vector<int> addToArrayForm(vector<int> &num, int k)
{
    string res = vectorToString(num);
    string s1 = to_string(k);

    res = Tong(res, s1);

    vector<int> result;
    for (int i = 0; i < res.length(); i++)
    {
        result.push_back(res[i] - '0');
    }

    return result;
}

int main()
{

    vector<int> num = {1, 2, 0, 0};
    int k = 34;
    vector<int> result = addToArrayForm(num, k);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}