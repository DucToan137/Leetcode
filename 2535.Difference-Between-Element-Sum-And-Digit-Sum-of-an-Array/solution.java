import static java.lang.Math.abs;

class solution {

    public int sumDigit(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    public int differenceOfSum(int[] nums) {
        int sumDigit = 0;
        int sumArray = 0;

        for (int i = 0; i < nums.length; i++) {
            sumDigit += sumDigit(nums[i]);
            sumArray += nums[i];
        }

        return Math.abs(sumDigit - sumArray);
    }

    public static void main(String[] args) {

        int[] nums = { 123, 45, 67, 89 };
        solution s = new solution();
        System.out.println(s.differenceOfSum(nums));
    }
}