import java.util.HashMap;
import java.util.Map;
import java.util.Arrays;

public class solution {
    public int maximumNumberOfStringPairs(String[] words) {
        Map<String, Integer> map = new HashMap<>();
        int res = 0;
        for (String word : words) {
            char[] arr = word.toCharArray();
            Arrays.sort(arr);
            String key = new String(arr);
            map.put(key, map.getOrDefault(key, 0) + 1);
        }

        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() >= 2) {
                res++;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String[] words = { "cd", "ac", "dc", "ca", "zz" };
        System.out.println(sol.maximumNumberOfStringPairs(words));
    }
}
