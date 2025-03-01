public class solution {
    public int[] applyOperations(int[] nums) {
        for (int i = 0; i < nums.length - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = 2 * nums[i];
                nums[i + 1] = 0;
            }
        }

        int zero = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] != 0) {
                nums[zero++] = nums[i];
            }
        }

        while (zero < nums.length) {
            nums[zero++] = 0;
        }

        return nums;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 2, 2, 2, 3, 4, 5, 5, 6, 6, 6 };
        int[] res = s.applyOperations(nums);
        for (int i = 0; i < res.length; ++i) {
            System.out.print(res[i] + " ");
        }
        System.out.println();
    }
}
