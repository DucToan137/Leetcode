import java.util.*;

public class solution {

    public int[] frequencySort(int[] nums) {
        // Create a hashmap to store the frequency of each element
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        // Convert the array to an Integer array to use Arrays.sort with a custom
        // comparator
        Integer[] arrobj = new Integer[nums.length];
        for (int i = 0; i < nums.length; i++) {
            arrobj[i] = nums[i];
        }

        // Sort the array based on the custom comparator
        Arrays.sort(arrobj, (a, b) -> {
            if (map.get(a).equals(map.get(b))) {
                return Integer.compare(b, a); // Sort by value in descending order if frequencies are the same
            }
            return Integer.compare(map.get(a), map.get(b)); // Sort by frequency in ascending order
        });

        // Convert the sorted array back to int array
        for (int i = 0; i < nums.length; i++) {
            nums[i] = arrobj[i];
        }

        return nums;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 1, 2, 2, 2, 3 };
        int[] res = s.frequencySort(nums);
        for (int i : res) {
            System.out.print(i + " ");
        }
    }
}
