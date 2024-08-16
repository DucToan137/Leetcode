public class solution {

    public static int searchInsert(int[] nums, int target) {
        int i = 0;
        for (i = 0; i < nums.length; i++) {
            if (target <= nums[i]) {
                return i;
            }
        }
        return i;
    }

    public static void main(String[] args) {
        ;
        int[] nums = { 1, 3, 5, 6 };
        int target = 5;
        System.out.println(searchInsert(nums, target));
    }
}
