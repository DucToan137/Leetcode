public class solution {
    public int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.theMaximumAchievableX(3, 2));
    }
}