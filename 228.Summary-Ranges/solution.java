import java.util.List;
import java.util.ArrayList;

public class solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> res = new ArrayList<>();
        if (nums.length == 0)
            return res;

        int start = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (i + 1 == nums.length || nums[i + 1] != nums[i] + 1) {
                if (start == i) {
                    res.add(nums[start] + "");
                } else {
                    res.add(nums[start] + "->" + nums[i]);
                }
                start = i + 1;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 0, 1, 2, 4, 5, 7 };
        List<String> res = sol.summaryRanges(nums);
        for (String s : res) {
            System.out.println(s);
        }
    }
}
