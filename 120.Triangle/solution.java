import java.util.ArrayList;
import java.util.List;

public class solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        for (int i = triangle.size() - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                triangle.get(i - 1).set(j,
                        triangle.get(i - 1).get(j) + Math.min(triangle.get(i).get(j), triangle.get(i).get(j + 1)));
            }
        }
        return triangle.get(0).get(0);
    }

    public static void main(String[] args) {
        solution s = new solution();
        List<List<Integer>> triangle = new ArrayList<List<Integer>>();
        List<Integer> l1 = new ArrayList<Integer>();
        l1.add(2);
        List<Integer> l2 = new ArrayList<Integer>();
        l2.add(3);
        l2.add(4);
        List<Integer> l3 = new ArrayList<Integer>();
        l3.add(6);
        l3.add(5);
        l3.add(7);
        List<Integer> l4 = new ArrayList<Integer>();
        l4.add(4);
        l4.add(1);
        l4.add(8);
        l4.add(3);
        triangle.add(l1);
        triangle.add(l2);
        triangle.add(l3);
        triangle.add(l4);
        System.out.println(s.minimumTotal(triangle));
    }
}
