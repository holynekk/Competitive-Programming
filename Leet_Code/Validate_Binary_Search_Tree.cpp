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
    
    bool BST_helper(TreeNode * root, long min, long max){
        if(!root){
            return true;
        }
        
        
        if(root->val <= min || root->val >= max){
            return false;
        }
        
        return BST_helper(root->left, min, root->val) && BST_helper(root->right, root->val, max);
    }
    
    bool isValidBST(TreeNode* root) {
        if (!root){
            return true;
        }
        
        return BST_helper(root, LONG_MIN, LONG_MAX);
        
    }
};