#include<iostream>
#include<stack>

using namespace std;

int countAsterisks(string s) {
    stack<char> st;        
    int count = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '|') {
            if(st.empty()) {
                st.push(s[i]);
            } else {
                st.pop();
            }
        } else if(s[i] == '*') {
            if(st.empty()) {
                count++;
            }
        }
    }
    
    return count;
}

int main(){
    string s = "yo|uar|e**|b|e***au|tifu|l";
    cout << countAsterisks(s) << endl;
    return 0;
}