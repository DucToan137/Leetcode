import java.util.List;
import java.util.ArrayList;

public class solution {
    public int largestAltitude(int[] gain) {
        List<Integer> altitudes = new ArrayList<>();
        altitudes.add(0);
        int max = 0;
        for (int i = 0; i < gain.length; i++) {
            int newAltitude = altitudes.get(i) + gain[i];
            altitudes.add(newAltitude);
            if (newAltitude > max) {
                max = newAltitude;
            }
        }
        return max;
    }
    
    public static void main(String[] args) {
        int[] gain = {-5, 1, 5, 0, -7};
        solution sol = new solution();
        System.out.println(sol.largestAltitude(gain));
    }
}
