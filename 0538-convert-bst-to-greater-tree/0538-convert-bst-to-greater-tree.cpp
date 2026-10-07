class Solution {
public:
int sum = 0;
    void dfs(TreeNode* &root){
        if(root== NULL) return;
        dfs(root->right);
        sum += root->val;
        root->val = sum;
        dfs(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        return root;
    }
};