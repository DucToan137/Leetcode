import java.util.Map;
import java.util.HashMap;

public class solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        Map<Integer, Integer> map = new HashMap<>();
        int[] res = new int[2];
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[i].length; j++) {
                map.put(grid[i][j], map.getOrDefault(grid[i][j], 0) + 1);
                if (map.get(grid[i][j]) > 1) {
                    res[0] = grid[i][j];
                }
            }
        }

        for (int i = 1; i <= grid.length * grid.length; ++i) {
            if (!map.containsKey(i)) {
                res[1] = i;
                break;
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[][] grid = { { 1, 3 }, { 2, 2 } };
        int[] res = s.findMissingAndRepeatedValues(grid);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
