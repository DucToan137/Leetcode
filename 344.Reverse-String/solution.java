public class solution {
    public static void reverseString(char[] s) {
        int i = 0;
        int j = s.length - 1;
        while (i < j) {
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            i++;
            j--;
        }
    }

    public static void main(String[] args) {

        char[] s = { 'h', 'e', 'l', 'l', 'o' };
        reverseString(s);

        for (char c : s) {
            System.out.print(c + " ");
        }

    }
}