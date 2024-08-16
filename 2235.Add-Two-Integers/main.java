public class main {
    public int add(int num1, int num2) {
        return num1 + num2;
    }

    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        main obj = new main();
        int num = obj.add(a, b);
        System.out.println(num);
    }
}
