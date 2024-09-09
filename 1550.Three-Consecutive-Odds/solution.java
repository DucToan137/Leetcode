public class solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        if (arr.length < 3)
            return false;

        for (int i = 0; i < arr.length - 2; i++) {
            if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
                return true;
            }
        }

        return false;
    }

    public static void main(String[] args) {
        int[] arr = { 2, 6, 4, 1 };
        solution s = new solution();
        System.out.println(s.threeConsecutiveOdds(arr));
    }
}
