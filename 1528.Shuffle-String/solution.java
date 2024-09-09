public class solution {
    public String restoreString(String s, int[] indices) {
        String res = s;

        for (int i = 0; i < indices.length; i++) {
            res = res.substring(0, indices[i]) + s.charAt(i) + res.substring(indices[i] + 1);
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        String str = "codeleet";
        int[] indices = { 4, 5, 6, 7, 0, 2, 1, 3 };
        System.out.println(s.restoreString(str, indices));
    }
}
