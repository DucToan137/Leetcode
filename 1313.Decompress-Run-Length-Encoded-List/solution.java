import java.util.Arrays;

public class solution {
    public int[] decompressRLElist(int[] nums) {
        int[] res = new int[0];

        for (int i = 0; i < nums.length; i += 2) {
            int freq = nums[i];
            int val = nums[i + 1];
            res = Arrays.copyOf(res, res.length + freq);
            for (int j = res.length - freq; j < res.length; j++) {
                res[j] = val;
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 2, 3, 4 };
        int[] res = s.decompressRLElist(nums);
        for (int i : res) {
            System.out.print(i + " ");
        }
    }
}
