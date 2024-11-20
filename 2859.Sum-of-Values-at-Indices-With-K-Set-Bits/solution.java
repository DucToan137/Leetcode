import java.util.List;
import java.lang.*;;

public class solution {
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int bits = Integer.bitCount(i);
            if (bits == k) {
                sum += nums.get(i);
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        solution s = new solution();
        List<Integer> nums = List.of(5, 10, 1, 5, 2);
        int k = 1;
        System.out.println(s.sumIndicesWithKSetBits(nums, k));
    }
}
