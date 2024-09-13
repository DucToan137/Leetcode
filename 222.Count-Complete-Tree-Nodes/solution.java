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

    public int countNodes(TreeNode root) {
        int count = 0;
        if (root == null) {
            return count;
        }
        return 1 + countNodes(root.left) + countNodes(root.right);
    }

    public static void main(String[] args) {
        solution sol = new solution();
        TreeNode root = sol.new TreeNode(1);
        TreeNode left = sol.new TreeNode(2);
        TreeNode right = sol.new TreeNode(3);
        root.left = left;
        root.right = right;
        System.out.println(sol.countNodes(root));
    }
}
