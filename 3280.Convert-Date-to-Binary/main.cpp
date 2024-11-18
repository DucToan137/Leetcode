#include <iostream>
#include <sstream>

using namespace std;

string convertToBinary(int num)
{
    string binary = "";
    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}

string convertDateToBinary(string date)
{
    string res = "";
    stringstream ss(date);
    string day, month, year;
    getline(ss, year, '-');
    getline(ss, month, '-');
    getline(ss, day, '-');

    res += convertToBinary(stoi(year)) + "-";
    res += convertToBinary(stoi(month)) + "-";
    res += convertToBinary(stoi(day));

    return res;
}

int main()
{
    string date = "2080-02-29";
    cout << convertDateToBinary(date) << endl;

    return 0;
}