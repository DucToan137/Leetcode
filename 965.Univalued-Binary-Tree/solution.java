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

    public boolean isUnivalTree(TreeNode root) {
        if (root == null) {
            return true;
        }

        int val = root.val;

        if (root.left != null && root.left.val != val) {
            return false;
        }

        if (root.right != null && root.right.val != val) {
            return false;
        }

        return isUnivalTree(root.left) && isUnivalTree(root.right);
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.left = s.new TreeNode(1);
        root.right = s.new TreeNode(1);
        root.left.left = s.new TreeNode(1);
        root.left.right = s.new TreeNode(1);
        root.right.right = s.new TreeNode(1);

        System.out.println(s.isUnivalTree(root));
    }
}
