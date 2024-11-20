public class solution {
    public int xorOperation(int n, int start) {
        int res = 0;
        for (int i = 0; i < n; i++) {
            res ^= start + 2 * i;
        }
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int n = 5;
        int start = 0;
        System.out.println(s.xorOperation(n, start));
    }
}
