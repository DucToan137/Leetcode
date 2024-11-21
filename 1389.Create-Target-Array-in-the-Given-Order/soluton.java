import java.util.ArrayList;
import java.util.List;

public class soluton {
    public int[] createTargetArray(int[] nums, int[] index) {
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) {
            list.add(index[i], nums[i]);
        }
        int[] res = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            res[i] = list.get(i);
        }
        return res;
    }

    public static void main(String[] args) {
        int[] nums = { 0, 1, 2, 3, 4 };
        int[] index = { 0, 1, 2, 2, 1 };
        soluton s = new soluton();
        int[] res = s.createTargetArray(nums, index);
        for (int i = 0; i < res.length; i++) {
            System.out.println(res[i]);
        }
    }
}