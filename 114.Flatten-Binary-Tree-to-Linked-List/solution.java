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

    public void flatten(TreeNode root) {
        if (root == null) {
            return;
        }

        flatten(root.left);
        flatten(root.right);

        TreeNode left = root.left;
        TreeNode right = root.right;
        root.left = null;
        root.right = left;
        TreeNode cur = root;

        while (cur.right != null) {
            cur = cur.right;
        }
        cur.right = right;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.left = s.new TreeNode(2);
        root.right = s.new TreeNode(5);
        root.left.left = s.new TreeNode(3);
        root.left.right = s.new TreeNode(4);
        root.right.right = s.new TreeNode(6);
        s.flatten(root);
        while (root != null) {
            System.out.println(root.val);
            root = root.right;
        }
    }

}
