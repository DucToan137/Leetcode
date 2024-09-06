import java.util.*;

public class solution {

    public String toBinary(int num) {
        StringBuilder sb = new StringBuilder();
        while (num > 0) {
            sb.append(num % 2);
            num = num / 2;
        }
        return sb.reverse().toString();
    }

    public int toDecimal(String binary) {
        int res = 0;
        for (int i = 0; i < binary.length(); i++) {
            res = res * 2 + binary.charAt(i) - '0';
        }
        return res;
    }

    public int bitwiseComplement(int n) {

        if (n == 0)
            return 1;

        String binary = toBinary(n);
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < binary.length(); i++) {
            sb.append(binary.charAt(i) == '0' ? '1' : '0');
        }

        String res = sb.toString();
        return toDecimal(res);
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.toBinary(5));
        System.out.println(s.toDecimal("101"));
        System.out.println(s.bitwiseComplement(5));
    }
}