import java.util.HashMap;
import java.util.Map;

public class solution {
    public int findPermutationDifference(String s, String t) {
        Map<Character, Integer> map = new HashMap<>();
        Map<Character, Integer> map2 = new HashMap<>();

        for (int i = 0; i < s.length(); ++i) {
            map.put(s.charAt(i), map.getOrDefault(s.charAt(i), 0) + i);
            map2.put(t.charAt(i), map2.getOrDefault(t.charAt(i), 0) + i);
        }

        int res = 0;

        for (int i = 0; i < s.length(); ++i) {
            res += Math.abs(map.get(s.charAt(i)) - map2.get(s.charAt(i)));
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.findPermutationDifference("abc", "bac"));
    }
}
