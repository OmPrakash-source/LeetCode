
class Solution {
public:
    pair<int, int> func(TreeNode* root, int &ans) {
        if (root == nullptr) {
            return {0, 0};
        }

        auto [leftSum, leftCount] = func(root->left, ans);
        auto [rightSum, rightCount] = func(root->right, ans);

        int sum = leftSum + rightSum + root->val;
        int count = leftCount + rightCount + 1;

        if (sum / count == root->val) {
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        func(root, ans);
        return ans;
    }
};
