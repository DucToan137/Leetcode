public class solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int count = 0;
        int i = 0;

        while (i < nums.length) {
            if (nums[i] == 1) {
                count++;
                max = Math.max(max, count);
            } else {
                count = 0;
            }
            i++;
        }

        return max;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { 1, 1, 0, 1, 1, 1 };
        System.out.println(s.findMaxConsecutiveOnes(nums));
    }
}
