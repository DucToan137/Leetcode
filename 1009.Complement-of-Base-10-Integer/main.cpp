#include <iostream>
#include <vector>
#include <cmath>
#include <string>

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

int bitwiseComplement(int n)
{
    if (n == 0)
    {
        return 1;
    }
    string binary = toBinary(n);
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
    cout << bitwiseComplement(num) << endl;

    return 0;
}