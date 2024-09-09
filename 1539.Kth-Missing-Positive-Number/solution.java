import java.util.*;

public class solution {
    public int findKthPositive(int[] arr, int k) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] <= k)
                k++;
        }
        return k;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] arr = { 2, 3, 4, 7, 11 };
        int k = 5;
        System.out.println(s.findKthPositive(arr, k));
    }
}
