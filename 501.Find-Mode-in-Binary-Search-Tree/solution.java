import java.util.Map;
import java.util.HashMap;

public class solution {
    public class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    void find(TreeNode root, Map<Integer, Integer> map) {
        if (root == null) {
            return;
        }
        map.put(root.val, map.getOrDefault(root.val, 0) + 1);
        find(root.left, map);
        find(root.right, map);
    }

    public int[] findMode(TreeNode root) {
        Map<Integer, Integer> map = new HashMap<>();
        find(root, map);
        int max = 0;
        for (int key : map.keySet()) {
            max = Math.max(max, map.get(key));
        }
        int count = 0;
        for (int key : map.keySet()) {
            if (map.get(key) == max) {
                count++;
            }
        }
        int[] res = new int[count];
        int index = 0;
        for (int key : map.keySet()) {
            if (map.get(key) == max) {
                res[index++] = key;
            }
        }
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.right = s.new TreeNode(2);
        root.right.left = s.new TreeNode(2);
        int[] res = s.findMode(root);
        for (int i = 0; i < res.length; i++) {
            System.out.println(res[i]);
        }
    }
}
