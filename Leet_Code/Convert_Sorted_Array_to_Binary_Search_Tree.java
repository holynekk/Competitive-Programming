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
    public TreeNode helper(int[] nums, TreeNode node, int left, int right) {
        if (left > right) {
            return null;
        }
        int mid = (int)(left+right)/2;
        TreeNode sub_node = new TreeNode(nums[mid]);
        sub_node.left = helper(nums, sub_node.left, left, mid-1);
        sub_node.right = helper(nums, sub_node.right, mid+1, right);
        return sub_node;
    }
    public TreeNode sortedArrayToBST(int[] nums) {
        int left = 0, right = nums.length-1;
        int mid = (int)(left+right)/2;
        TreeNode root = new TreeNode(nums[mid]);
        root.left = helper(nums, root.left, left, mid-1);
        root.right = helper(nums, root.right, mid+1, right);
        return root;
    }
}
