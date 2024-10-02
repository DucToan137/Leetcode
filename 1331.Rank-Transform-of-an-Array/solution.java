import java.util.HashMap;
import java.util.Map;
import java.util.Arrays;

public class solution {
    public int[] arrayRankTransform(int[] arr) {

        if (arr.length == 0)
            return new int[0];

        int[] temp = Arrays.copyOf(arr, arr.length);
        Arrays.sort(temp);

        Map<Integer, Integer> mp = new HashMap<>();
        mp.put(temp[0], 1);

        for (int i = 1; i < temp.length; i++) {
            if (temp[i] > temp[i - 1]) {
                mp.put(temp[i], mp.get(temp[i - 1]) + 1);
            } else {
                mp.put(temp[i], mp.get(temp[i - 1]));
            }
        }

        int[] res = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            res[i] = mp.get(arr[i]);
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] arr = { 40, 10, 20, 30 };
        int[] res = s.arrayRankTransform(arr);
        for (int i : res) {
            System.out.println(i);
        }
    }
}
