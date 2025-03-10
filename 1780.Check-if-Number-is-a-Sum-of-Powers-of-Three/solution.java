public class solution {
    public boolean checkPowersOfThree(int n) {
        while (n > 0) {
            if (n % 3 == 2) {
                return false;
            }
            n /= 3;
        }
        return true;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int n = 12;
        System.out.println(sol.checkPowersOfThree(n));
    }
}
