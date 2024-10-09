import java.util.*;

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

    public void duyet(TreeNode root, List<Integer> list) {
        if (root == null) {
            return;
        }
        duyet(root.left, list);
        list.add(root.val);
        duyet(root.right, list);
    }

    public TreeNode increasingBST(TreeNode root) {
        if (root == null)
            return null;

        List<Integer> list = new ArrayList<>();
        duyet(root, list);

        list.sort((a, b) -> a - b);

        TreeNode newRoot = new TreeNode(list.get(0));
        TreeNode temp = newRoot;
        for (int i = 1; i < list.size(); i++) {
            temp.right = new TreeNode(list.get(i));
            temp = temp.right;
        }
        return newRoot;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(5);
        root.left = s.new TreeNode(3);
        root.right = s.new TreeNode(6);
        root.left.left = s.new TreeNode(2);
        root.left.right = s.new TreeNode(4);
        root.right.right = s.new TreeNode(8);
        root.left.left.left = s.new TreeNode(1);
        root.right.right.left = s.new TreeNode(7);
        root.right.right.right = s.new TreeNode(9);

        TreeNode newRoot = s.increasingBST(root);
        System.out.println(newRoot.val);
    }
}
