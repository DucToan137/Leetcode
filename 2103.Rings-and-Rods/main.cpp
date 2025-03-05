#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int countPoints(string rings)
{
    map<int, set<char>> map;

    for (int i = 0; i < rings.length(); i += 2)
    {
        char color = rings[i];
        int rodNum = rings[i + 1] - '0';

        map[rodNum].insert(color);
    }

    int count = 0;
    for (auto &pair : map)
    {
        if (pair.second.size() == 3)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string rings1 = "B0B6G0R6R0R6G9";
    cout << countPoints(rings1) << endl;

    string rings2 = "B0R0G0R9R0B0G0";
    cout << countPoints(rings2) << endl;

    string rings3 = "G4";
    cout << countPoints(rings3) << endl;

    return 0;
}