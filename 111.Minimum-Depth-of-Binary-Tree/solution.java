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

    public int minDepth(TreeNode root) {
        if (root == null) {
            return 0;
        }

        if (root.left == null) {
            return 1 + minDepth(root.right);
        }
        if (root.right == null) {
            return 1 + minDepth(root.left);
        }
        return 1 + Math.min(minDepth(root.left), minDepth(root.right));
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(3);
        root.left = s.new TreeNode(9);
        root.right = s.new TreeNode(20);
        root.right.left = s.new TreeNode(15);
        System.err.println(s.minDepth(root));
    }
}