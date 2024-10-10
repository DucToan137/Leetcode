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

    public void isLeaf(TreeNode root, List<Integer> leaves) {
        if (root == null) {
            return;
        }
        if (root.left == null && root.right == null) {
            leaves.add(root.val);
        }
        isLeaf(root.left, leaves);
        isLeaf(root.right, leaves);
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> leaves1 = new ArrayList<>();
        List<Integer> leaves2 = new ArrayList<>();
        isLeaf(root1, leaves1);
        isLeaf(root2, leaves2);
        return leaves1.equals(leaves2);
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root1 = s.new TreeNode(3);
        root1.left = s.new TreeNode(5);
        root1.right = s.new TreeNode(1);
        root1.left.left = s.new TreeNode(6);
        root1.left.right = s.new TreeNode(2);
        root1.right.left = s.new TreeNode(9);
        root1.right.right = s.new TreeNode(8);
        root1.left.right.left = s.new TreeNode(7);
        root1.left.right.right = s.new TreeNode(4);

        TreeNode root2 = s.new TreeNode(3);
        root2.left = s.new TreeNode(5);
        root2.right = s.new TreeNode(1);
        root2.left.left = s.new TreeNode(6);
        root2.left.right = s.new TreeNode(7);
        root2.right.left = s.new TreeNode(4);
        root2.right.right = s.new TreeNode(2);
        root2.right.right.left = s.new TreeNode(9);
        root2.right.right.right = s.new TreeNode(8);

        System.out.println(s.leafSimilar(root1, root2));
    }
}
