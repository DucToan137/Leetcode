import java.util.Stack;

public class solution {
    public int countAsterisks(String s) {
        Stack<Character> st = new Stack<>();
        int res = 0;
        
        for(int i = 0; i < s.length(); ++i){
            if(s.charAt(i) == '|'){
                if(st.isEmpty()){
                    st.push(s.charAt(i));
                }else{
                    st.pop();
                }
            } else if(s.charAt(i) == '*'){
                if(st.isEmpty()){
                    res++;
                }
            }
        }
        
        return res;
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        System.out.println(sol.countAsterisks("l|*e*et|c**o|*de|"));
    }
}
