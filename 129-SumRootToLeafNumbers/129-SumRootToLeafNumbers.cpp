// Last updated: 5/10/2026, 11:53:41 PM
class Solution {
public:
    void func(TreeNode* root, int &sum, int &ans){
        if(root == NULL) return;

        ans = ans * 10 + root->val;

        if(root->left == NULL && root->right == NULL){
            sum += ans;
        } else {
            func(root->left, sum, ans);
            func(root->right, sum, ans);
        }

        ans /= 10;
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0, sum = 0;
        func(root, sum, ans);
        return sum;
    }
};