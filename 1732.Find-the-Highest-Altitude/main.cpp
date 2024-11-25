#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int largestAltitude(vector<int>& gain) {
    gain.insert(gain.begin(), 0);
    
    for(int i = 1;i < gain.size(); ++i){
        gain[i] += gain[i-1];
    }
    
    int max = *max_element(gain.begin(), gain.end());
    return max;
}

int main(){
    vector<int> gain = {-5,1,5,0,-7};
    cout << largestAltitude(gain) << endl;
    return 0;
}