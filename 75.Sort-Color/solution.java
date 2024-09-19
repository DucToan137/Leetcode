public class solution {
    public void sortColors(int[] nums) {
        for (int i = 0; i < nums.length; ++i) {
            for (int j = 0; j < nums.length - 1; ++j) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = { 2, 0, 2, 1, 1, 0 };
        solution sol = new solution();
        sol.sortColors(nums);
        for (int i = 0; i < nums.length; ++i) {
            System.out.print(nums[i] + " ");
        }
    }
}