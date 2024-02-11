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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> result = new ArrayList<>();
        if (root == null) {
            return result;
        }
        
        Queue<TreeNode> nodes = new LinkedList<>();
        nodes.add(root);

        while (!nodes.isEmpty()) {
            int n = nodes.size();
            double sum = 0;
            for (int i = 0; i < n; i++) {
                TreeNode dummy = nodes.remove();
                sum += dummy.val;
                if (dummy.left != null) {
                    nodes.add(dummy.left);
                }
                if (dummy.right != null) {
                    nodes.add(dummy.right);
                }
            }
            result.add(sum / n);
        }

        return result;
    }
}