#include <iostream>
#include <vector>

using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int search(vector<int> &nums, int target)
{
    return binarySearch(nums.data(), 0, nums.size() - 1, target);
}

int main()
{

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 90;
    cout << search(nums, target) << endl;
    return 0;
}