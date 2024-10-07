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

    public int rangeSumBST(TreeNode root, int low, int high) {
        if (root == null) {
            return 0;
        }

        if (root.val < low) {
            return rangeSumBST(root.right, low, high);
        } else if (root.val > high) {
            return rangeSumBST(root.left, low, high);
        } else {
            return root.val + rangeSumBST(root.left, low, high) + rangeSumBST(root.right, low, high);
        }
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(10);
        root.left = s.new TreeNode(5);
        root.right = s.new TreeNode(15);
        root.left.left = s.new TreeNode(3);
        root.left.right = s.new TreeNode(7);
        root.right.right = s.new TreeNode(18);
        System.out.println(s.rangeSumBST(root, 7, 15));
    }
}
