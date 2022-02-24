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
    bool isSymmetric_helper(TreeNode* p1, TreeNode* p2) {
        if (!p1 && !p2) {
            return true;
        } else if (!p1 || !p2) {
            return false;
        }
        if (p1->val != p2->val) {
            return false;
        }
        return isSymmetric_helper(p1->left, p2->right) && isSymmetric_helper(p1->right, p2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        } return isSymmetric_helper(root->left, root->right);
    }
};