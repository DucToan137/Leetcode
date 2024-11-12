public class solution {
    public int[] findArray(int[] pref) {
        int[] res = new int[pref.length];
        int temp = pref[0];
        res[0] = temp;

        for (int i = 1; i < pref.length; i++) {
            res[i] = pref[i] ^ temp;
            temp = pref[i];
        }
        return res;
    }

    public static void main(String[] args) {
        int[] pref = { 5, 2, 0, 3, 1 };
        solution s = new solution();
        int[] res = s.findArray(pref);
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }
    }
}
