public class solution {
    public int countConsistentStrings(String allowed, String[] words) {
        int count = 0;
        for (String word : words) {
            boolean consistent = true;
            for (int i = 0; i < word.length(); ++i) {
                if (allowed.indexOf(word.charAt(i)) == -1) {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        solution s = new solution();
        String allowed = "abc";
        String[] words = { "ad", "bd", "aaab", "baa", "badab" };
        System.out.println(s.countConsistentStrings(allowed, words));
    }
}
