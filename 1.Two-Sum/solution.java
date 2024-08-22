class solution {

    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];

        for (int i = 0; i < nums.length; ++i) {
            for (int j = 0; j < nums.length; ++j) {
                if (i != j) {
                    int temp = nums[i] + nums[j];
                    if (temp == target) {
                        result[0] = i;
                        result[1] = j;
                        return result;
                    }
                }
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;

        solution s = new solution();
        int[] result = s.twoSum(nums, target);

        System.out.println(result[0] + " " + result[1]);
    }
}