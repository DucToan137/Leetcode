public class solution {

    public boolean isPalindrome(String s) {
        String str = "";

        for (int i = 0; i < s.length(); i++) {
            if (Character.isLetterOrDigit(s.charAt(i))) {
                str += s.charAt(i);
            }
        }

        str = str.toLowerCase();

        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args) {
        solution s = new solution();
        String str = "A man, a plan, a canal: Panama";
        System.out.println(s.isPalindrome(str));
    }
}
