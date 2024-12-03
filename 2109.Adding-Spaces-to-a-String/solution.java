public class solution{
    public String addSpaces(String s, int[] spaces) {
        StringBuilder sb = new StringBuilder();
        int i = 0;
        
        for(int j : spaces) {
            sb.append(s, i, j);
            sb.append(" ");
            i = j;
        }
        sb.append(s.substring(i));
        return sb.toString();
    }
    
    public static void main(String[] args) {
        solution sol = new solution();
        String s = "hello";
        int[] spaces = {1, 2, 3};
        System.out.println(sol.addSpaces(s, spaces));
    }
}