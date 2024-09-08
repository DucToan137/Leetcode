public class solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        StringBuffer sb = new StringBuffer(sentence);
        String words;

        int i = 0;
        while (sb.length() > 0) {
            i++;
            int index = sb.indexOf(" ");
            if (index == -1) {
                words = sb.toString();
                sb.delete(0, sb.length());
            } else {
                words = sb.substring(0, index);
                sb.delete(0, index + 1);
            }
            if (words.startsWith(searchWord)) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String sentence = "i love eating burger";
        String searchWord = "burg";
        int res = sol.isPrefixOfWord(sentence, searchWord);
        System.out.println(res);
    }
}
