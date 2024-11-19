public class solution {
    public int differenceOfSums(int n, int m) {
        int sumDivisible = 0;
        int sumNonDivisible = 0;

        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                sumDivisible += i;
            } else {
                sumNonDivisible += i;
            }
        }

        return sumNonDivisible - sumDivisible;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.differenceOfSums(10, 3));
    }
}
