import java.util.ArrayList;
import java.util.List;

public class solution {
    public List<Integer> getRow(int rowIndex) {
        if (rowIndex == 0) {
            List<Integer> res = new ArrayList<Integer>();
            res.add(1);
            return res;
        }

        List<Integer> res = new ArrayList<Integer>();
        List<Integer> pre = getRow(rowIndex - 1);
        res.add(1);
        for (int i = 1; i < rowIndex; i++) {
            res.add(pre.get(i - 1) + pre.get(i));
        }
        res.add(1);

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        List<Integer> res = sol.getRow(3);
        for (int i = 0; i < res.size(); i++) {
            System.out.print(res.get(i) + " ");
        }
        System.out.println();
    }
}
