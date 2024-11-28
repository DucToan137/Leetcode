import java.util.Arrays;

public class solution {
    public double minimumAverage(int[] nums) {
        Arrays.sort(nums);
        double res = Double.MAX_VALUE;
        int i = 0;
        int j = nums.length - 1;
        while (i < j) {
            double avg = (nums[i] + nums[j]) / 2.0;
            res = Math.min(res, avg);
            ++i;
            --j;
        }
        return res;
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = {7,8,3,4,15,13,4,1};
        System.out.println(sol.minimumAverage(nums));
    }
}
