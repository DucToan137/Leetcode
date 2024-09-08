import java.util.*;

public class solution {

    public int findLucky(int[] arr) {
        int max = -1;
        Map<Integer, Integer> map = new HashMap<>();
        for (int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        for (int key : map.keySet()) {
            if (key == map.get(key)) {
                max = Math.max(max, key);
            }
        }
        return max;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] arr = { 2, 2, 3, 4 };
        int res = sol.findLucky(arr);
        System.out.println(res);
    }
}
