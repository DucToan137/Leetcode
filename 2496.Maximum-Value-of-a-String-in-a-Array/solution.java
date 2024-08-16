public class solution {
    public static int maximumValue(String[] strs) {
        int result = Integer.MIN_VALUE;

        for (String str : strs) {
            boolean flag = true;
            int n = str.length();

            for (char c : str.toCharArray()) {
                if (Character.isAlphabetic(c)) {
                    result = Math.max(result, n);
                    flag = false;
                    break;
                }
            }

            if (flag) {
                int num = Integer.parseInt(str);
                result = Math.max(result, num);
            }
        }

        return result;
    }

    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
