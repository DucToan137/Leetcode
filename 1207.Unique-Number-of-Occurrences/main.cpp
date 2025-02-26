#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> count;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
    }

    unordered_set<int> s;
    for (auto &item : count)
    {
        if (s.find(item.second) != s.end())
        {
            return false;
        }
        s.insert(item.second);
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    cout << uniqueOccurrences(arr) << endl;
    return 0;
}