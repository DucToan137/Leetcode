import java.util.*;

public class solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < arr1.length; i++) {
            map.put(arr1[i], map.getOrDefault(arr1[i], 0) + 1);
        }

        List<Integer> resList = new ArrayList<>();
        for (int i = 0; i < arr2.length; i++) {
            int count = map.get(arr2[i]);
            for (int j = 0; j < count; j++) {
                resList.add(arr2[i]);
            }
            map.remove(arr2[i]);
        }

        List<Integer> rest = new ArrayList<>();
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            int count = entry.getValue();
            for (int i = 0; i < count; i++) {
                rest.add(entry.getKey());
            }
        }

        Collections.sort(rest);
        resList.addAll(rest);
        int[] res = new int[resList.size()];
        for (int i = 0; i < resList.size(); i++) {
            res[i] = resList.get(i);
        }

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] arr1 = { 2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19 };
        int[] arr2 = { 2, 1, 4, 3, 9, 6 };
        int[] res = sol.relativeSortArray(arr1, arr2);
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }
    }
}
