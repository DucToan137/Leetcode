public class solution {

    public int[] runningSum(int[] nums) {
        int[] result = new int[nums.length];

        for (int i = 0; i < nums.length; ++i) {
            int sum = 0;
            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            }
            result[i] = sum;
        }

        return result;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 2, 3, 4 };
        int[] result = s.runningSum(nums);
        for (int i : result) {
            System.out.println(i);
        }
    }
}
