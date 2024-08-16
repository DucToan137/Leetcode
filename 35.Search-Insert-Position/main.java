public class main {

    public int searchInsert(int[] nums, int target) {
        int i = 0;
        for (i = 0; i < nums.length; i++) {
            if (target <= nums[i]) {
                return i;
            }
        }
        return i;
    }

    public static void main(String[] args) {
        main m = new main();
        int[] nums = { 1, 3, 5, 6 };
        int target = 5;
        System.out.println(m.searchInsert(nums, target));
    }
}
