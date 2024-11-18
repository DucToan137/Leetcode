public class solution {
    public int subsetXORSum(int[] nums) {
        int totalSubset = 1 << nums.length;
        int res = 0;

        for (int i = 0; i < totalSubset; ++i) {
            int xor = 0;
            for (int j = 0; j < nums.length; ++j) {
                if ((i & (1 << j)) != 0) {
                    xor ^= nums[j];
                }
            }
            res += xor;
        }
        return res;
    }

    public static void main(String[] args) {
        int[] nums = { 1, 3 };
        solution sol = new solution();
        System.out.println(sol.subsetXORSum(nums));
    }
}
