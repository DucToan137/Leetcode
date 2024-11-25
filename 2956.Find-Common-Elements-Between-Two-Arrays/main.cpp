#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
    vector<int> res;
    
    int ans1 = 0;
    int ans2 = 0;
    
    for(int i = 0;i < nums1.size(); ++i){
        if(find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end()){
            ans1++;
        }
    }
    
    for(int i = 0;i < nums2.size(); ++i){
        if(find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()){
            ans2++;
        }
    }
    
    res.push_back(ans1);
    res.push_back(ans2);
    
    return res;
}

int main(){
    vector<int> nums1 = {4,3,2,3,1};
    vector<int> nums2 = {2,2,5,2,3,6};
    vector<int> res = findIntersectionValues(nums1, nums2);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}