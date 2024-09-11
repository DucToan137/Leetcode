import java.util.*;

public class solution {
    public int singleNumber(int[] nums) {

        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; ++i) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey();
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 2, 2, 3, 2 };
        System.out.println(s.singleNumber(nums));

    }
}