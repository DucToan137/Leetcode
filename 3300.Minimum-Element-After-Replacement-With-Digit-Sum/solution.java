import java.util.Arrays;

public class solution{
    public int sumDigit(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    
    public int minElement(int[] nums) {
        int min = Integer.MAX_VALUE;
        
        for(int i = 0; i< nums.length; ++i){
            nums[i] = sumDigit(nums[i]);
            min = Math.min(min, nums[i]);
        }
        
        return min;
    }
    
    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = {10, 20, 7};
        System.out.println(s.minElement(nums));
    }
}