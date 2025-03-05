import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;

public class solution {
    public int countPoints(String rings) {
        Map<Integer, Set<Character>> map = new HashMap<>();
        int count = 0;

        for (int i = 0; i < rings.length(); i += 2) {
            char color = rings.charAt(i);
            int rod = rings.charAt(i + 1) - '0';

            map.put(rod, map.getOrDefault(rod, new HashSet<>()));
            map.get(rod).add(color);

        }

        for (Map.Entry<Integer, Set<Character>> entry : map.entrySet()) {
            if (entry.getValue().size() == 3) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        solution s = new solution();
        // Add G color to test all three colors
        System.out.println(s.countPoints("B0R0G0R1G1B1"));
    }

}
