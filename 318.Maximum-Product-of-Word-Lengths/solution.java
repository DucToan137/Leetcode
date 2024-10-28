public class solution {
    public boolean checkCommon(int[] a, int[] b) {
        for (int i = 0; i < 26; i++) {
            if (a[i] > 0 && b[i] > 0) {
                return true;
            }
        }
        return false;
    }

    public int maxProduct(String[] words) {
        int n = words.length;
        int max = 0;

        int[][] V = new int[n][26];

        for (int i = 0; i < n; i++) {
            for (char ch : words[i].toCharArray()) {
                V[i][ch - 'a']++;
            }

            for (int j = 0; j < i; j++) {
                if (!checkCommon(V[i], V[j])) {
                    int size = words[i].length() * words[j].length();
                    max = Math.max(max, size);
                }
            }
        }

        return max;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String[] words = { "abcw", "baz", "foo", "bar", "xtfn", "abcdef" };
        System.out.println(sol.maxProduct(words));
    }
}