public class solution {

    public int countDigit(int n) {
        int count = 0;
        while (n > 0) {
            n /= 10;
            count++;
        }
        return count;
    }

    public int findNumbers(int[] nums) {
        int count = 0;
        for (int n : nums) {
            if (countDigit(n) % 2 == 0)
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 12, 345, 2, 6, 7896 };
        System.out.println(s.findNumbers(nums));
    }
}
