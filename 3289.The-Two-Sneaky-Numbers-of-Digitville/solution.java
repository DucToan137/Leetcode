import java.util.*;
import java.util.Map.Entry;

public class solution {
    public int[] getSneakyNumbers(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        int[] res = new int[2];
        int i = 0;

        for (Map.Entry<Integer, Integer> item : map.entrySet()) {
            if (item.getValue() == 2) {
                res[i++] = item.getKey();
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2 };
        int[] res = sol.getSneakyNumbers(nums);
        for (int num : res) {
            System.out.println(num);
        }
    }
}
