import java.util.Arrays;

public class solution {
    public int maximizeSum(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length;
        int res = nums[n - 1];
        int temp = res;
        for (int i = 1; i < k; ++i) {
            res += temp + i;
        }
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 2, 3, 4, 5 };
        int k = 3;
        System.out.println(s.maximizeSum(nums, k));
    }
}
