#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> convertNumToVector(int num)
{
    vector<int> result;
    while (num > 0)
    {
        result.push_back(num % 10);
        num /= 10;
    }

    return result;
}

int minimumSum(int num)
{
    vector<int> numVector = convertNumToVector(num);
    int res = 0;

    sort(numVector.begin(), numVector.end());
    int sumDozens = 0;
    int sumUnits = 0;

    sumUnits = numVector[2] + numVector[3];
    sumDozens = numVector[0] + numVector[1];

    res = sumDozens * 10 + sumUnits;
    return res;
}

int main()
{
    int num = 4009;
    cout << minimumSum(num) << endl;
    return 0;
}