public class solution {
    public String multiply(String num1, String num2) {
        int l1 = num1.length(), l2 = num2.length();

        int[] result = new int[l1 + l2];
        for (int i = l1 - 1; i >= 0; i--) {
            int carry = 0;
            for (int j = l2 - 1; j >= 0; j--) {
                int product = (num1.charAt(i) - '0') * (num2.charAt(j) - '0') + carry + result[i + j + 1];
                result[i + j + 1] = product % 10;
                carry = product / 10;
            }
            result[i] += carry;
        }
        String res = "";
        for (int i = 0; i < result.length; i++) {
            if (!(res.equals("") && result[i] == 0)) {
                res += result[i];
            }
        }
        return res.equals("") ? "0" : res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.multiply("123", "456"));
    }
}
