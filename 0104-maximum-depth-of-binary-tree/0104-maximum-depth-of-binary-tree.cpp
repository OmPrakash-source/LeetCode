class Solution {
public:
    // int func(TreeNode* root){
    //     if(!root) return 0;
    //     return 1 + max(func(root->left), func(root->right));
    // }
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        // return func(root);
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};