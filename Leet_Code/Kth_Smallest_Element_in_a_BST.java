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
    public void inorderTraversal(TreeNode node, List<Integer> smallestList) {
        if (node == null) {
            return;
        }
        inorderTraversal(node.left, smallestList);
        smallestList.add(node.val);
        inorderTraversal(node.right, smallestList);
    }
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> smallestList = new ArrayList<>();
        inorderTraversal(root, smallestList);
        return smallestList.get(k-1);
    }
}