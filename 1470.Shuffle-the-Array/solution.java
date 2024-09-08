import java.util.*;

public class solution {
    public int[] shuffle(int[] nums, int n) {
        List<Integer> res = new ArrayList<>();

        for (int i = 0; i < n; ++i) {
            res.add(nums[i]);
            res.add(nums[i + n]);
        }

        return res.stream().mapToInt(i -> i).toArray();
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 2, 5, 1, 3, 4, 7 };
        int n = 3;
        int[] res = sol.shuffle(nums, n);
        System.out.println(nums);
    }
}
