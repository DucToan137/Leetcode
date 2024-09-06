public class solution {

    int giaTri(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return -1;
    }

    public int romanToInt(String s) {
        int res = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (i == s.length() - 1) {
                res += giaTri(s.charAt(i));
                continue;
            }
            if (giaTri(s.charAt(i)) < giaTri(s.charAt(i + 1))) {
                res -= giaTri(s.charAt(i));
            } else {
                res += giaTri(s.charAt(i));
            }
        }

        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        String roman = "MCMXCIV";
        System.out.println(s.romanToInt(roman));
    }
}
