public class solution {
    int sumHash(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += s.charAt(i) - 'a';
        }
        return sum;
    }

    public String stringHash(String s, int k) {
        String res = "";

        for (int i = 0; i < s.length(); i += k) {
            String temp = s.substring(i, i + k);
            int sum = sumHash(temp);
            res += (char) (sum % 26 + 'a');

        }

        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String s = "abcd";
        int k = 2;
        System.out.println(sol.stringHash(s, k));
    }
}