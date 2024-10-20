import java.util.*;

public class solution {
    public boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    public int dis(int year, int month, int day) {
        int days = 0;
        int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        for (int i = 1971; i < year; i++) {
            days += isLeapYear(i) ? 366 : 365;
        }

        for (int i = 0; i < month - 1; i++) {
            days += monthDays[i];
        }

        if (month > 2 && isLeapYear(year)) {
            days++;
        }

        days += day;
        return days;
    }

    public int daysBetweenDates(String date1, String date2) {
        int year1 = Integer.parseInt(date1.substring(0, 4));
        int month1 = Integer.parseInt(date1.substring(5, 7));
        int day1 = Integer.parseInt(date1.substring(8, 10));

        int year2 = Integer.parseInt(date2.substring(0, 4));
        int month2 = Integer.parseInt(date2.substring(5, 7));
        int day2 = Integer.parseInt(date2.substring(8, 10));

        return Math.abs(dis(year2, month2, day2) - dis(year1, month1, day1));
    }

    public static void main(String[] args) {
        solution s = new solution();
        System.out.println(s.daysBetweenDates("2019-06-29", "2019-06-30"));
    }
}
