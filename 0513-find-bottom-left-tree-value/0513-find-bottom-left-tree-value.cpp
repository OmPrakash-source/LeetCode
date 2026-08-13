class Solution {
public:
    int func(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(func(root->left), func(root->right));
    }
    bool ans(TreeNode* root, int maxi, int &result){
        if(root == NULL) return false;
        if(maxi == 0){
            result = root->val;
            return true;
        }

        if (ans(root->left, maxi - 1, result))
        return true;

        return ans(root->right, maxi - 1, result);

    }
    int findBottomLeftValue(TreeNode* root) {
        int maxdepth = func(root);
        int result = 0;
        ans(root, maxdepth-1, result);
        return result;

    }
};