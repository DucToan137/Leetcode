public class solution {
    public int dayOfYear(String date) {
        String day = date.substring(8, 10);
        String month = date.substring(5, 7);
        String year = date.substring(0, 4);

        int d = Integer.parseInt(day);
        int m = Integer.parseInt(month);
        int y = Integer.parseInt(year);

        int[] days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            days[1] = 29;
        }

        for (int i = 0; i < m - 1; i++) {
            d += days[i];
        }
        return d;
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.dayOfYear("2019-01-09"));
    }
}