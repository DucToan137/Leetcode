#include <iostream>
#include <string>
#include <vector>

using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{
    char min = '{';

    for (int i = 0; i < letters.size(); ++i)
    {
        if (letters[i] > target && letters[i] < min)
        {
            min = letters[i];
        }
    }
    if (min == '{')
    {
        return letters[0];
    }
    else
    {
        return min;
    }
}

int main()
{

    vector<char> letters = {'c', 'f', 'j'};
    char target = 'c';
    cout << nextGreatestLetter(letters, target) << endl;

    vector<char> letters2 = {'c', 'f', 'j'};

    return 0;
}