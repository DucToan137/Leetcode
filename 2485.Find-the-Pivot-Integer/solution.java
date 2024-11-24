public class solution {
    public int sumFromMToN(int m, int n) {
        return (m + n) * (n - m + 1) / 2;
    }
    
    public int pivotInteger(int n) {
        for(int i = 1; i <= n; ++i){
            if(sumFromMToN(0, i) == sumFromMToN(i, n)){
                return i;
            }
        }
        
        return -1;
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        System.out.println(sol.pivotInteger(7));
    }
}
