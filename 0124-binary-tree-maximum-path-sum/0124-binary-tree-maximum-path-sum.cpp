class Solution {
public:
    int maxi = INT_MIN;
    int dfs(TreeNode* root){
        if(root == NULL) return 0;
        int l = max(0, dfs(root->left));
        int r = max(0, dfs(root->right));
        maxi = max(maxi, l + r + root->val);
        return max(l, r) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        if(root == nullptr) return 0;
        int ans = dfs(root);
        return maxi;
    }
};