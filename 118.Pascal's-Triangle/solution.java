import java.util.ArrayList;
import java.util.List;

public class solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        if (numRows == 0)
            return res;

        List<Integer> first = new ArrayList<Integer>();
        first.add(1);
        res.add(first);

        for (int i = 1; i < numRows; i++) {
            List<Integer> row = new ArrayList<Integer>();
            List<Integer> pre = res.get(i - 1);
            row.add(1);
            for (int j = 1; j < i; j++) {
                row.add(pre.get(j - 1) + pre.get(j));
            }
            row.add(1);
            res.add(row);
        }

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        List<List<Integer>> res = sol.generate(5);
        for (List<Integer> row : res) {
            for (int num : row) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}
