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

    public int sum = 0;

    public TreeNode bstToGst(TreeNode root) {
        if (root.right != null)
            bstToGst(root.right);

        sum += root.val;
        root.val = sum;

        if (root.left != null)
            bstToGst(root.left);

        return root;
    }

    public void printTree(TreeNode root) {
        if (root == null)
            return;
        printTree(root.left);
        System.out.println(root.val);
        printTree(root.right);
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(4);
        root.left = s.new TreeNode(1);
        root.right = s.new TreeNode(6);
        root.left.left = s.new TreeNode(0);
        root.left.right = s.new TreeNode(2);
        root.left.right.right = s.new TreeNode(3);
        root.right.left = s.new TreeNode(5);
        root.right.right = s.new TreeNode(7);
        root.right.right.right = s.new TreeNode(8);
        s.bstToGst(root);

        s.printTree(root);
    }
}
