#include<iostream>
#include<string>
#include<vector>

using namespace std;

// Solution 1
// string addSpaces(string s, vector<int>& spaces) {
//     for(int i = 0; i < spaces.size(); ++i){
//         s.insert(s.begin() + spaces[i] + i, ' ');
        
//     }        
    
//     return s;
// }

// Solution 2
string addSpaces(string s, vector<int>& spaces) {
    int m = spaces.size();
    int n = s.size();
    string t(m + n, ' ');
    
    int j = 0;
    for(int i = 0; i < n; ++i){
        if(j < m && spaces[j] == i){
            j++;
        }
        t[i+j] = s[i];
    }
    return t;
}

int main(){
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces = {8,13,15};
    cout << addSpaces(s, spaces) << endl;
    return 0;
}