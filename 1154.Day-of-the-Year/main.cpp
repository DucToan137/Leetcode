#include <iostream>

using namespace std;

int dayOfYear(string date)
{
    string day = date.substr(8, 2);
    string month = date.substr(5, 2);
    string year = date.substr(0, 4);

    int d = stoi(day);
    int m = stoi(month);
    int y = stoi(year);

    int k[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        k[1] = 29;
    }

    for (int i = 0; i < m - 1; i++)
    {
        d += k[i];
    }
    return d;
}

int main()
{

    return 0;
}