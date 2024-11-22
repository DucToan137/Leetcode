public class solution {
    public void sort(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i; j < nums.length; j++) {
                if (nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }

    public int[] numberGame(int[] nums) {
        sort(nums);
        int[] res = new int[nums.length];

        for (int i = 0; i < nums.length; i += 2) {
            res[i] = nums[i + 1];
            res[i + 1] = nums[i];
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 5, 4, 2, 3 };
        int[] res = s.numberGame(nums);
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }
    }
}