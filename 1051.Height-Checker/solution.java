import java.util.Arrays;

public class solution {
    public int heightChecker(int[] heights) {
        int res = 0;

        int[] sorted = heights.clone();
        Arrays.sort(sorted);

        for (int i = 0; i < heights.length; i++) {
            if (sorted[i] != heights[i]) {
                res++;
            }
        }

        return res;
    }

    public static void main(String[] args) {

        int[] heights = { 1, 1, 4, 2, 1, 3 };
        solution sol = new solution();
        System.out.println(sol.heightChecker(heights));
    }
}
