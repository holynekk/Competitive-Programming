/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    
    int calculate(TreeNode* root, int maxd, int ex = 1){
        if (root == nullptr) return ans;
        if (root->left == nullptr && root->right == nullptr && ex == maxd){
            ans += root->val;
        }else{
            calculate(root->left, maxd, ex+1);
            calculate(root->right, maxd, ex+1);
        }
        return ans;
    }
    
    int max_depth(TreeNode * root){
        if (root == nullptr) return 0;
        return max(max_depth(root->left), max_depth(root->right))+1;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int maxd = max_depth(root);
        return calculate(root, maxd);
    }
};