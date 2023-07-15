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
    public void createSequence(TreeNode node, List<Integer> arr) {
        if (node != null) {
            if (node.left == null && node.right == null)
                arr.add(node.val);
            createSequence(node.left, arr);
            createSequence(node.right, arr);
        }
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> seq1 = new ArrayList();
        List<Integer> seq2 = new ArrayList();
        
        createSequence(root1, seq1);
        createSequence(root2, seq2);
        return seq1.equals(seq2);
    }
}