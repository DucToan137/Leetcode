import java.security.AlgorithmConstraints;
import java.util.*;

public class solution {

    public int max(int[] candies) {
        int max = -1;
        for (int i = 0; i < candies.length; i++) {
            max = Math.max(max, candies[i]);
        }
        return max;
    }

    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = max(candies);

        List<Boolean> res = new ArrayList<>();

        for (int i = 0; i < candies.length; i++) {
            if (candies[i] + extraCandies >= max) {
                res.add(true);
            } else {
                res.add(false);
            }
        }

        return res;
    }

    public static void main(String[] args) {
        List<Boolean> res = new ArrayList<>();
        solution sol = new solution();
        int[] candies = { 2, 3, 5, 1, 3 };
        int extraCandies = 3;
        res = sol.kidsWithCandies(candies, extraCandies);
        System.out.println(res);
    }
}
