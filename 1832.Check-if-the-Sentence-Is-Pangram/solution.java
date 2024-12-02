import java.util.Map;
import java.util.HashMap;

public class solution {
    public boolean checkIfPangram(String sentence) {
        Map<Character, Integer> map = new HashMap<>();
        for (char c : sentence.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        return map.size() == 26;
    }
    
    public static void main(String[] args) {
        solution s = new solution();
        String sentence = "thequickbrownfoxjumpsoverthelazydog";
        System.out.println(s.checkIfPangram(sentence));
    }
}
