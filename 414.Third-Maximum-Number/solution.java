import java.util.*;

public class solution {
    public int thirdMax(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        int count = 1;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] != nums[i - 1]) {
                count++;
            }
            if (count == 3) {
                return nums[i - 1];
            }
        }
        return nums[n - 1];
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 3, 2, 1 };
        System.out.println(sol.thirdMax(nums));
    }
}
