public class solution {
    public int countDigits(int n) {
        int count = 0;
        while (n != 0) {
            count++;
            n /= 10;
        }
        return count;
    }
    
    int sumNum1Digit(int[] nums){
        int res = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (countDigits(nums[i]) == 1) {
                res += nums[i];
            }
        }
        return res;
    }
    
    int sumNum2Digit(int[] nums) {
        int res = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (countDigits(nums[i]) == 2) {
                res += nums[i];
            }
        }
        return res;
    }
    
    public boolean canAliceWin(int[] nums) {
        int sum1 = sumNum1Digit(nums);
        int sum2 = sumNum2Digit(nums);
        
        if(sum1 == sum2){
            return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        int[] nums = {12, 34, 56, 78, 90};
        solution sol = new solution();
        System.out.println(sol.canAliceWin(nums));
    }
}
