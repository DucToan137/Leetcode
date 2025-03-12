public class solution {
    public int maximumCount(int[] nums) {
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] > 0) {
                pos++;
            } else if (nums[i] < 0) {
                neg++;
            }
        }
        return pos > neg ? pos : neg;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 5, -1, -2, -3, -4, -5 };
        solution sol = new solution();
        System.out.println(sol.maximumCount(nums));
    }
}
