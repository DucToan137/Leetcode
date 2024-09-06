public class solution {

    public int subtractProductAndSum(int n) {
        int res;
        int tich = 1;
        int tong = 0;
        while (n > 0) {
            int temp = n % 10;
            tich *= temp;
            tong += temp;
            n /= 10;
        }
        res = tich - tong;
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int n = 234;
        System.out.println(s.subtractProductAndSum(n));
    }
}
