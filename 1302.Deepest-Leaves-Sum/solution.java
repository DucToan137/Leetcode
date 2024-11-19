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

    class Result {
        int maxDepth;
        int sum;
    }

    public void dfs(TreeNode root, int depth, Result result) {
        if (root == null) {
            return;
        }

        if (depth > result.maxDepth) {
            result.maxDepth = depth;
            result.sum = root.val;
        } else if (depth == result.maxDepth) {
            result.sum += root.val;
        }

        dfs(root.left, depth + 1, result);
        dfs(root.right, depth + 1, result);
    }

    public int deepestLeavesSum(TreeNode root) {
        Result result = new Result();
        dfs(root, 0, result);
        return result.sum;
    }

    public static void main(String[] args) {
        solution s = new solution();
        TreeNode root = s.new TreeNode(1);
        root.left = s.new TreeNode(2);
        root.right = s.new TreeNode(3);
        root.left.left = s.new TreeNode(4);
        root.left.right = s.new TreeNode(5);
        root.right.right = s.new TreeNode(6);
        root.left.left.left = s.new TreeNode(7);
        root.right.right.right = s.new TreeNode(8);
        System.out.println(s.deepestLeavesSum(root));
    }
}
