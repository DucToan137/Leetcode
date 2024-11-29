public class solution{
    public int sumOddIndex(String num){
        int sum = 0;
        for(int i = 0; i < num.length(); i++){
            if(i % 2 == 1){
                sum += num.charAt(i) - '0';
            }
        }
        return sum;
    }
    
    public int sumEvenIndex(String num){
        int sum = 0;
        for(int i = 0; i < num.length(); i++){
            if(i % 2 == 0){
                sum += num.charAt(i) - '0';
            }
        }
        return sum;
    }
    
    public boolean isBalanced(String num) {
        return sumOddIndex(num) == sumEvenIndex(num);
    }
    
    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.isBalanced("1234"));
        System.out.println(s.isBalanced("12345"));
    }
}