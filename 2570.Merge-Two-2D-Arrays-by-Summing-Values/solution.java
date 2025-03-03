import java.util.Map;
import java.util.HashMap;
import java.util.Arrays;

public class solution {
    // public int[][] sumById(int[][] nums) {
    // Map<Integer, Integer> map = new HashMap<>();
    // for (int i = 0; i < nums.length; ++i) {
    // map.put(nums[i][0], map.getOrDefault(nums[i][0], 0) + nums[i][1]);
    // }
    // int[][] res = new int[map.size()][2];
    // for (int i = 0; i < map.size(); ++i) {
    // res[i][0] = (int) map.keySet().toArray()[i];
    // res[i][1] = map.get(res[i][0]);
    // }
    // return res;
    // }

    public int[][] mergeArrays(int[][] nums1, int[][] nums2) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums1.length; ++i) {
            map.put(nums1[i][0], map.getOrDefault(nums1[i][0], 0) + nums1[i][1]);
        }
        for (int i = 0; i < nums2.length; ++i) {
            map.put(nums2[i][0], map.getOrDefault(nums2[i][0], 0) + nums2[i][1]);
        }

        int[][] res = new int[map.size()][2];
        int i = 0;
        Integer[] keys = map.keySet().toArray(new Integer[0]);
        Arrays.sort(keys);

        for (int key : keys) {
            res[i][0] = key;
            res[i][1] = map.get(key);
            i++;
        }

        return res;
    }

    public static void main(String[] args) {
        int[][] nums = { { 1, 2 }, { 2, 3 }, { 4, 5 } };
        int[][] nums2 = { { 1, 4 }, { 3, 2 }, { 4, 1 } };
        solution sol = new solution();
        int[][] res = sol.mergeArrays(nums, nums2);
        for (int i = 0; i < res.length; ++i) {
            System.out.println(res[i][0] + " " + res[i][1]);
        }
    }
}
