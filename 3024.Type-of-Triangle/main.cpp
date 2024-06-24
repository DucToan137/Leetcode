#include<iostream>
#include<vector>

using namespace std;

string triangleType(vector<int>& nums) {

    if (nums[0] + nums[1] <= nums[2] || nums[1] + nums[2] <= nums[0] || nums[2] + nums[0] <= nums[1])
    {
        return "none";
    }
    else
    {
        if (nums[0] == nums[1] && nums[1] == nums[2])
        {
            return "equilateral";
        }
        else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[2] != nums[0])
        {
            return "scalene";
        }
        else
        {
            return "isosceles";
        }
    }
}

int main() {

	return 0;
}
