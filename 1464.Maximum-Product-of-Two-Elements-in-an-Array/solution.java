import java.util.Arrays;;

public class solution{
    public int maxProduct(int[] nums) {
        Arrays.sort(nums);
        return (nums[nums.length-1]-1)*(nums[nums.length-2]-1);
    }
    
    public static void main(String[] args) {
        int[] nums = {3,4,5,2};
        solution s = new solution();
        System.out.println(s.maxProduct(nums));
    }
}