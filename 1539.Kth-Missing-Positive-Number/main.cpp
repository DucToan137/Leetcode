#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int res = -1;
    int i = 1;
    int kth = 1;

    while (kth <= k)
    {
        if (find(arr.begin(), arr.end(), i) == arr.end())
        {
            res = i;
            kth++;
        }
        i++;
    }

    return res;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k) << endl;

    return 0;
}