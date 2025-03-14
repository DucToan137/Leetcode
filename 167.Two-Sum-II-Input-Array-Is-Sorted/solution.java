public class solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] res = new int[2];
        int left = 0;
        int right = numbers.length - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] == target) {
                res[0] = left + 1;
                res[1] = right + 1;
                return res;
            } else if (numbers[left] + numbers[right] < target) {
                left++;
            } else {
                right--;
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] numbers = { 2, 7, 11, 15 };
        int target = 9;
        int[] res = sol.twoSum(numbers, target);
        System.out.println(res[0] + " " + res[1]);
    }
}