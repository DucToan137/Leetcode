public class solution {
    public int sumOfDigit(int x){
        int sum = 0;
        while(x > 0){
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
    
    public int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = sumOfDigit(x);
        return x % sum == 0 ? sum : -1;
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        System.out.println(sol.sumOfTheDigitsOfHarshadNumber(18));
    }
}
