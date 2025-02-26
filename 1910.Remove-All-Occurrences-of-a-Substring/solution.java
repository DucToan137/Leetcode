public class solution {
    public String removeOccurrences(String s, String part) {
        while (s.contains(part)) {
            s = s.replaceFirst(part, "");
        }
        return s;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String s = "daabcbaabcbc", part = "abc";
        System.out.println(sol.removeOccurrences(s, part));
    }
}
