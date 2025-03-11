import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        int[] map = new int[1001];
        List<List<Integer>> result = new ArrayList<>();

        for (int[] items : items1)
            map[items[0]] = items[1];

        for (int[] items : items2)
            map[items[0]] += items[1];

        for (int i = 1; i < 1001; i++) {
            if (map[i] > 0)
                result.add(Arrays.asList(i, map[i]));
        }

        return result;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[][] items1 = { { 1, 2 }, { 2, 3 }, { 3, 4 } };
        int[][] items2 = { { 2, 3 }, { 3, 4 }, { 4, 5 } };
        List<List<Integer>> res = sol.mergeSimilarItems(items1, items2);
        for (List<Integer> item : res) {
            System.out.println(item.get(0) + " " + item.get(1));
        }
    }
}
