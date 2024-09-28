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

    public TreeNode searchBST(TreeNode root, int val) {
        if (root == null) {
            return null;
        }

        if (root.val == val) {
            return root;
        } else if (root.val > val) {
            return searchBST(root.left, val);
        } else {
            return searchBST(root.right, val);
        }
    }

    public static void main(String[] args) {
        solution s = new solution()
        TreeNode root = s.new TreeNode(4);
        root.left = s.new TreeNode(2);
        root.right = s.new TreeNode(7);
        root.left.left = s.new TreeNode(1);
        root.left.right = s.new TreeNode(3);
        System.err.println(s.searchBST(root, 2).val);
    }
}
