import java.util.Arrays;

public class solution {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        return nums[n - 1] * nums[n - 2] - nums[0] * nums[1];
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 5, 6, 2, 7, 4 };
        System.out.println(sol.maxProductDifference(nums));
    }
}