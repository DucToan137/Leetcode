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

    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null && q == null) {
            return true;
        }

        if (p == null || q == null) {
            return false;
        }

        if (p.val == q.val) {
            return isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
        }

        return false;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode p = s.new TreeNode(1);
        p.left = s.new TreeNode(2);
        p.right = s.new TreeNode(3);

        TreeNode q = s.new TreeNode(1);
        q.left = s.new TreeNode(2);
        q.right = s.new TreeNode(3);

        System.out.println(s.isSameTree(p, q));
    }
}
