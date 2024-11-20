#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Solution 1
// string convertToBinary(int num)
// {
//     string binary = "";
//     while (num > 0)
//     {
//         binary = to_string(num % 2) + binary;
//         num /= 2;
//     }
//     return binary;
// }

// int countSetBits(string binary)
// {
//     int count = 0;
//     for (int i = 0; i < binary.size(); i++)
//     {
//         if (binary[i] == '1')
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int sumIndicesWithKSetBits(vector<int> &nums, int k)
// {
//     int sum = 0;
//     for (int i = 0; i < nums.size(); ++i)
//     {
//         string binary = convertToBinary(i);
//         int count = countSetBits(binary);
//         cout << "Binary: " << binary << " Count: " << count << endl;
//         if (count == k)
//         {
//             sum += nums[i];
//         }
//     }
//     return sum;
// }

// Solution 2
int sumIndicesWithKSetBits(vector<int> &nums, int k)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int bits = __builtin_popcount(i); // Đếm số bit 1 của i
        if (bits == k)
        {
            sum += nums[i];
        }
    }
    return sum;
}

int main()
{
    vector<int> nums = {5, 10, 1, 5, 2};
    int k = 1;
    cout << sumIndicesWithKSetBits(nums, k) << endl;
    return 0;
}