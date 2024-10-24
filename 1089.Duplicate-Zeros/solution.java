import java.util.List;
import java.util.ArrayList;

public class solution {
    public void duplicateZeros(int[] arr) {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                list.add(0);
                list.add(0);
            } else {
                list.add(arr[i]);
            }
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i] = list.get(i);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 0, 0, 0, 0, 0, 0 };
        solution s = new solution();
        s.duplicateZeros(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
