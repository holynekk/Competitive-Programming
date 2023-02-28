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
    public void helper(List<Integer> result, TreeNode node, int level) {
        if (node == null) {
            return;
        } else if (result.size() == level) {
            result.add(node.val);
        }
        helper(result, node.right, level+1);
        helper(result, node.left, level+1);
    }
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> result = new ArrayList<>();
        if (root == null) {
            return result;
        }
        helper(result, root, 0);
        return result;
    }
}
