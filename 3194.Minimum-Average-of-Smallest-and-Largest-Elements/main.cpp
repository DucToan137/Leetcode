#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double minimumAverage(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    double res = INT16_MAX;
    for(int i = 0; i < nums.size() - 1; i++){
        double avg = (nums[i] + nums[nums.size() - 1]) / 2.0;
        if(avg < res){
            res = avg;
        }
        nums.pop_back();
    }
    return res;
}

int main(){
    vector<int> nums = {7,8,3,4,15,13,4,1};
    cout << minimumAverage(nums) << endl;
    return 0;
}