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
private:
    vector<vector<int>> ans;
public:
    void levelOrder_helper(TreeNode* root, int depth) {
        if (!root) {
            return;
        }
        if (ans.size() == depth) {
            vector<int> blabla;
            ans.push_back(blabla);
        }
        ans[depth].push_back(root->val);
        levelOrder_helper(root->left , depth+1);
        levelOrder_helper(root->right , depth+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelOrder_helper(root, 0);
        return ans;
    }
};