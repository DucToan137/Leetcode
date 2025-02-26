import java.util.*;

public class solution {
    public boolean uniqueOccurrences(int[] arr) {
        Map<Integer, Integer> map = new HashMap<>();
        Set<Integer> set = new HashSet<>();
        for (int num : arr) {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        for (int value : map.values()) {
            if (!set.add(value)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] arr = { 1, 2, 2, 1, 1, 3 };
        System.out.println(sol.uniqueOccurrences(arr));
    }
}
