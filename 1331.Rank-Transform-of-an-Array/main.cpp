#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> arrayRankTransform(vector<int> &arr)
{
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]] = 0;
    }
    int rank = 1;
    for (auto &i : m)
    {
        i.second = rank++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = m[arr[i]];
    }
    return arr;
}

int main()
{

    return 0;
}