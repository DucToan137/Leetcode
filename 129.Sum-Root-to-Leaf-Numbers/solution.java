import java.util.ArrayList;
import java.util.List;

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

    public void leaf(TreeNode root, List<Integer> list, int num) {
        if (root == null) {
            return;
        }
        num = num * 10 + root.val;
        if (root.left == null && root.right == null) {
            list.add(num);
            return;
        }
        leaf(root.left, list, num);
        leaf(root.right, list, num);
    }

    public int sumNumbers(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        leaf(root, list, 0);
        int sum = 0;
        for (int i : list) {
            sum += i;
        }
        return sum;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.left = s.new TreeNode(2);
        root.right = s.new TreeNode(3);
        System.out.println(s.sumNumbers(root));
    }
}