#include<iostream>
#include<vector>

using namespace std;

int countDigits(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}

int sumNum1Digit(vector<int> nums){
    int res = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(countDigits(nums[i]) == 1){
            res+= nums[i];
        }
    }
    return res;
}

int sumNum2Digit(vector<int> nums){
    int res = 0;
    for(int i = 0; i < nums.size(); ++i){
        if(countDigits(nums[i]) == 2){
            res+= nums[i];
        }
    }
    return res;
}

int sumOfVector(vector<int> nums){
    int res = 0;
    for(int i = 0; i < nums.size(); ++i){
        res+= nums[i];
    }
    return res;
}

bool canAliceWin(vector<int>& nums) {
    int sum1Digit = sumNum1Digit(nums);
    int sum2Digit = sumNum2Digit(nums);
    
    cout << sum1Digit << " " << sum2Digit << endl;
    
    if(sum1Digit == sum2Digit){
        return false;
    }
    return true;
}

int main(){
    vector<int> nums = {1,2,3,4,10};
    cout << canAliceWin(nums) << endl;
    return 0;
}