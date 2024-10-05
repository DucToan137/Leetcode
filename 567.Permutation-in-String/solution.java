public class solution {
    public boolean checkInclusion(String s1, String s2) {
        int[] s1map = new int[26];
        int[] s2map = new int[26];
        for (char c : s1.toCharArray()) {
            s1map[c - 'a']++;
        }
        int left = 0;
        int right = 0;
        while (right < s2.length()) {
            if (right - left < s1.length()) {
                s2map[s2.charAt(right) - 'a']++;
                right++;
            } else {
                if (Arrays.equals(s1map, s2map)) {
                    return true;
                }
                s2map[s2.charAt(left) - 'a']--;
                left++;
            }
        }
        return Arrays.equals(s1map, s2map);
    }

    public static void main(String[] args) {
        solution sol = new solution();
        String s1 = "ab";
        String s2 = "eidbaooo";
        System.out.println(sol.checkInclusion(s1, s2));
    }
}
