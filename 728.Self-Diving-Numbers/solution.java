public class solution {
    public boolean isSelfDividing(int num) {
        int n = num;
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0 || num % digit != 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }

    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> res = new ArrayList<>();
        for (int num = left; num <= right; num++) {
            if (isSelfDividing(num)) {
                res.add(num);
            }
        }
        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int left = 1;
        int right = 22;
        List<Integer> res = sol.selfDividingNumbers(left, right);
        System.out.println(res);

    }
}