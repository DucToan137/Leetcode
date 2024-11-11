#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> generateMatrix(int n) {   
    vector<vector<int>> res(n, vector<int>(n, 0));
    
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    int num = 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            res[top][i] = num++;
        }
        top++;
        
        for (int i = top; i <= bottom; i++) {
            res[i][right] = num++;
        }
        right--;
        
        for (int i = right; i >= left; i--) {
            res[bottom][i] = num++;
        }
        bottom--;
        
        for (int i = bottom; i >= top; i--) {
            res[i][left] = num++;
        }
        left++;
    }
    
    return res;
}


int main(){
    
    
    
    return 0;
}
