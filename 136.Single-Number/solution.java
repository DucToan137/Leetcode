import java.util.*;

public class solution {
    public int singleNumber(int[] nums) {
        nums = Arrays.stream(nums).sorted().toArray();

        if (nums.length == 1) {
            return nums[0];
        }

        if (nums[0] != nums[1]) {
            return nums[0];
        }

        int n = nums.length;
        if (nums[n - 1] != nums[n - 2]) {
            return nums[n - 1];
        }

        for (int i = 1; i < n - 1; ++i) {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 4, 1, 2, 1, 2 };
        System.out.println(s.singleNumber(nums));
    }
}
