public class solution {
    public int sumBase(int n, int k) {
        int sum = 0;
        while (n > 0) {
            sum += n % k;
            n /= k;
        }
        return sum;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int n = 34;
        int k = 6;
        int res = sol.sumBase(n, k);
        System.out.println(res);
    }
}
