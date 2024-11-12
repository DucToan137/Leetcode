import java.util.List;
import java.util.ArrayList;

public class solution {
    public List<Integer> stableMountains(int[] height, int threshold) {
        List<Integer> result = new ArrayList<>();
        for (int i = 1; i < height.length; ++i) {
            if (height[i - 1] > threshold) {
                result.add(i);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[] height = { 1, 2, 3, 4, 5 };
        int threshold = 2;
        solution sol = new solution();
        List<Integer> result = sol.stableMountains(height, threshold);
        System.out.println(result);
    }
}
