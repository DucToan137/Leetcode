import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class solution {
    public List<String> commonChars(String[] words) {
        List<String> res = new ArrayList<>();
        int[] minFreq = new int[26];
        Arrays.fill(minFreq, Integer.MAX_VALUE);

        for (String word : words) {
            int[] freq = new int[26];
            for (char c : word.toCharArray()) {
                freq[c - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                minFreq[i] = Math.min(minFreq[i], freq[i]);
            }
        }

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                res.add(String.valueOf((char) (i + 'a')));
            }
        }
        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String[] words = { "bella", "label", "roller" };
        System.out.println("Test: " + sol.commonChars(words));
    }
}
