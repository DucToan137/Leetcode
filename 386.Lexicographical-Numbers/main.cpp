#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

vector<int> lexicalOrder(int n)
{
    set<string> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(to_string(i));
    }
    vector<int> res;
    for (auto i : s)
    {
        res.push_back(stoi(i));
    }
    return res;
}

int main()
{

    return 0;
}