#include<iostream>
#include<vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> temp1;
    vector<int> temp2;
    vector<int> res;
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] > 0) {
            temp1.push_back(nums[i]);
        } else {
            temp2.push_back(nums[i]);
        }
    }
    
    for(int i = 0; i < temp1.size(); i++) {
        res.push_back(temp1[i]);
        res.push_back(temp2[i]);
    }
    
    return res;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(nums);
    
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    
    return 0;
}