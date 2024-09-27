import java.util.List;
import java.util.ArrayList;

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

    public void dfs(TreeNode root, String temp, List<String> res) {
        if (root == null) {
            return;
        }

        if (root.left == null && root.right == null) {
            temp += String.valueOf(root.val);
            res.add(temp);
        }

        temp += String.valueOf(root.val) + "->";

        dfs(root.left, temp, res);
        dfs(root.right, temp, res);
    }

    public List<String> binaryTreePaths(TreeNode root) {
        List<String> res = new ArrayList<>();
        dfs(root, "", res);
        return res;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.left = s.new TreeNode(2);
        root.right = s.new TreeNode(3);
        root.left.right = s.new TreeNode(5);
        List<String> res = s.binaryTreePaths(root);
        for (String str : res) {
            System.out.println(str);
        }
    }
}