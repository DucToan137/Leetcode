import java.util.*;

import javax.xml.crypto.AlgorithmMethod;

public class solution {
    public int minLength(String s) {
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            char temp = s.charAt(i);

            if (st.isEmpty()) {
                st.push(temp);
                continue;
            }

            if (temp == 'B' && st.peek() == 'A') {
                st.pop();
            } else if (temp == 'D' && st.peek() == 'C') {
                st.pop();
            } else {
                st.push(temp);
            }
        }

        return st.size();
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.minLength("ADOBECODEBANC"));
    }
}