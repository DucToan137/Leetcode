import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class solution {
    public String[] findRestaurant(String[] list1, String[] list2) {
        Map<String, Integer> map = new HashMap<>();
        List<String> res = new ArrayList<>();
        int minSum = Integer.MAX_VALUE;
        for (int i = 0; i < list1.length; i++) {
            map.put(list1[i], i);
        }
        for (int i = 0; i < list2.length; i++) {
            if (map.containsKey(list2[i])) {
                int sum = i + map.get(list2[i]);
                if (sum < minSum) {
                    res.clear();
                    res.add(list2[i]);
                    minSum = sum;
                } else if (sum == minSum) {
                    res.add(list2[i]);
                }
            }
        }
        return res.toArray(new String[res.size()]);
    }

    public static void main(String[] args) {
        solution s = new solution();
        String[] list1 = { "Shogun", "Tapioca Express", "Burger King", "KFC" };
        String[] list2 = { "KFC", "Shogun", "Burger King" };
        String[] res = s.findRestaurant(list1, list2);
        for (String str : res) {
            System.out.println(str);
        }
    }
}