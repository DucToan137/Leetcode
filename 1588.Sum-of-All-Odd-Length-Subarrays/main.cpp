#include<iostream>
#include<vector>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int res = 0;
    for(int i=0; i < arr.size(); ++i){
        int sum = 0;
        for (int j = i; j < arr.size(); ++j){
            sum += arr[j];
            if((j-i+1) % 2 == 1){
                res += sum;
            }
        }
    }       
    return res;
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    cout << sumOddLengthSubarrays(arr) << endl;
    
    return 0;
}