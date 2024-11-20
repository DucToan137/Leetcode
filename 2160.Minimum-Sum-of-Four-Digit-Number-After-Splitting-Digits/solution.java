import java.util.Collections;
import java.util.List;
import java.util.ArrayList;

public class solution {
    List<Integer> convertNumToList(int num) {
        List<Integer> list = new ArrayList<>();
        while (num > 0) {
            list.add(num % 10);
            num /= 10;
        }
        return list;
    }

    public int minimumSum(int num) {
        List<Integer> list = convertNumToList(num);
        Collections.sort(list);

        int sum = 0;
        int sumDozen = 0;
        int sumUnit = 0;

        sumUnit = list.get(2) + list.get(3);
        sumDozen = list.get(0) + list.get(1);
        sum = sumDozen * 10 + sumUnit;

        return sum;
    }

    public static void main(String[] args) {
        solution s = new solution();
        int num = 2932;
        System.out.println(s.minimumSum(num));
    }
}
