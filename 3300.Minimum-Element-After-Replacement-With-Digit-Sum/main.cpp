#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int sumDigit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int minElement(vector<int>& nums) {
    for(int i = 0;i<nums.size(); ++i){
        nums[i] = sumDigit(nums[i]);
    }           
    return *min_element(nums.begin(), nums.end());
}

int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    cout << minElement(nums) << endl;
    return 0;
}