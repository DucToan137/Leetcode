import java.util.HashSet;
import java.util.Set;

public class solution {
    public int uniqueMorseRepresentations(String[] words) {
        String[] morseCode = new String[] { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                "...-", ".--", "-..-", "-.--", "--.." };
        Set<String> set = new HashSet<>();
        for (String word : words) {
            StringBuilder sb = new StringBuilder();
            for (char c : word.toCharArray()) {
                sb.append(morseCode[c - 'a']);
            }
            set.add(sb.toString());
        }
        return set.size();
    }

    public static void main(String[] args) {
        solution s = new solution();
        String[] words = new String[] { "gin", "zen", "gig", "msg" };
        System.out.println(s.uniqueMorseRepresentations(words));
    }
}
