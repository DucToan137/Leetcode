public class solution {
    int reverse(int n) {
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }

    public boolean isSameAfterReversals(int num) {
        int temp = reverse(num);
        return num == reverse(temp);
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.isSameAfterReversals(123));
        System.out.println(s.isSameAfterReversals(121));
    }
}
