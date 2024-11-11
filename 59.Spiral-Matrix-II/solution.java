public class solution{
    public int[][] generateMatrix(int n) {
     int[][] res = new int[n][n];
     
     int top = 0;
     int bottom = n - 1;
     int left = 0;
     int right = n - 1;
     int num = 1;
     
     while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            res[top][i] = num++;
        }
        top++;
        
        for(int i= top; i <= bottom; i++){
            res[i][right] = num++;
        }
        right--;
        
        for(int i = right; i >= left; i--){
            res[bottom][i] = num++;
        }
        bottom--;
        
        for(int i = bottom; i >= top; i--){
            res[i][left] = num++;
        }
        left++;    
    }
        return res;
    }
    
    public static void main(String[] args) {
        solution s = new solution();
        int[][] res = s.generateMatrix(3);
        for(int i = 0; i < res.length; i++){
            for(int j = 0; j < res[0].length; j++){
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }
    }
}