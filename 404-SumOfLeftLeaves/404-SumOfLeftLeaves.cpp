// Last updated: 5/10/2026, 11:51:25 PM
class Solution {
public:
    void helper(TreeNode* root, int &ans){
        if(root == NULL) return;
        if(root->left && root->left->left == NULL && root->left->right == NULL){
            ans += root->left->val;
        }
        helper(root->left, ans);
        helper(root->right, ans);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        helper(root, ans);
        return ans;
    }
};