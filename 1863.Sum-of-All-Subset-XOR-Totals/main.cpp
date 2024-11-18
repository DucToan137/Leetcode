#include <iostream>
#include <vector>

using namespace std;

int subsetXORSum(vector<int> &a)
{
    int n = a.size();
    int bitSize = 1 << n; // 2^n: số tập con của a
    int res = 0;

    for (int i = 0; i < bitSize; i++)
    {
        int curr = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // Kiểm tra bit thứ j của i có bằng 1 hay không
            {
                curr ^= a[j]; // curr = curr XOR a[j]
            }
        }
        res += curr;
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 3};
    cout << subsetXORSum(nums) << endl;

    return 0;
}