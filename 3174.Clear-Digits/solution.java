public class solution {
    public String clearDigits(String s) {
        StringBuilder res = new StringBuilder();
        for (Character c : s.toCharArray()) {
            if (Character.isDigit(c)) {
                if (res.length() > 0) {
                    res.deleteCharAt(res.length() - 1);
                }
            } else {
                res.append(c);
            }

        }
        return res.toString();
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.clearDigits("cb34"));
    }
}
