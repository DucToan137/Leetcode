#include <iostream>

using namespace std;

int theMaximumAchievableX(int num, int t)
{
    num += 1 * t;
    return num + t;
}

int main()
{
    int num = 4;
    int t = 1;

    cout << theMaximumAchievableX(num, t) << endl;
    return 0;
}