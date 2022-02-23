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
    void do_job(vector<int> & ans, TreeNode* root) {
        if (!root) {
            return;
        }
        ans.push_back(root->val);
        do_job(ans, root->left);
        do_job(ans, root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        do_job(ans, root);
        return ans;
    }
};