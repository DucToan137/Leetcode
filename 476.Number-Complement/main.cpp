#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

string toBinary(int num)
{
    string binary = "";

    while (num > 0)
    {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }

    return binary;
}

int toDecimal(string binary)
{
    int decimal = 0;
    int power = 0;

    for (int i = binary.size() - 1; i >= 0; --i)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, power);
        }

        power++;
    }

    return decimal;
}

int findComplement(int num)
{
    string binary = toBinary(num);
    for (int i = 0; i < binary.size(); ++i)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else
        {
            binary[i] = '0';
        }
    }
    int complement = toDecimal(binary);
    return complement;
}

int main()
{
    int num = 5;
    cout << toBinary(num) << endl;
    cout << toDecimal(toBinary(num)) << endl;
    cout << findComplement(1) << endl;
    return 0;
}
