import java.util.*;

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

    private TreeNode helper(int[] nums, int s, int e) {
        if (s > e)
            return null;
        int mid = s + (e - s) / 2;
        TreeNode node = new TreeNode(nums[mid]);
        node.left = helper(nums, s, mid - 1);
        node.right = helper(nums, mid + 1, e);
        return node;
    }

    public TreeNode sortedArrayToBST(int[] nums) {
        int n = nums.length;
        if (n == 0)
            return null;
        return helper(nums, 0, n - 1);
    }

    public static void main(String[] args) {
        solution s = new solution();
        int[] nums = { -10, -3, 0, 5, 9 };
        TreeNode root = s.sortedArrayToBST(nums);
        System.out.println(root.val);
    }
}
