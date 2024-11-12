import java.util.List;
import java.util.Map;
import java.util.ArrayList;
import java.util.HashMap;

public class solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }

        while (map.size() > 0) {
            List<Integer> temp = new ArrayList<>();
            for (Map.Entry<Integer, Integer> entry : new HashMap<>(map).entrySet()) {
                if (entry.getValue() > 0) {
                    temp.add(entry.getKey());
                    map.put(entry.getKey(), entry.getValue() - 1);

                    if (map.get(entry.getKey()) == 0) {
                        map.remove(entry.getKey());
                    }
                }
            }
            res.add(temp);
        }

        return res;

    }

    public static void main(String[] args) {
        solution sol = new solution();
        int[] nums = { 1, 3, 4, 1, 2, 3, 1 };
        List<List<Integer>> res = sol.findMatrix(nums);
        for (List<Integer> list : res) {
            System.out.println(list);
        }
    }
}
