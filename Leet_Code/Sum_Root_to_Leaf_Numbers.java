/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public int helper(TreeNode root, int totalPrevious) {
        if (root == null) {
            return 0;
        }
        totalPrevious = totalPrevious * 10 + root.val;

        if (root.left == null && root.right == null) {
            return totalPrevious;
        } else {
            return helper(root.left, totalPrevious) + helper(root.right, totalPrevious);
        }
    }

    public int sumNumbers(TreeNode root) {
        if (root == null) {
            return 0;
        } else if (root.left == null && root.right == null) {
            return root.val;
        }
        int total = root.val;
        total = helper(root.left, total) + helper(root.right, total);
        return total;
    }
}