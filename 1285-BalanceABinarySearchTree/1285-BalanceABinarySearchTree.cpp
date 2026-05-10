// Last updated: 5/10/2026, 11:48:03 PM
class Solution {
public:
    TreeNode* buildBalancedBST(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBalancedBST(nums, left, mid - 1);
        root->right = buildBalancedBST(nums, mid + 1, right);

        return root;
    }


    void pushintoarr(TreeNode* root, vector<int>&nums) {
        if(!root) return;
        pushintoarr(root->left, nums);
        nums.push_back(root->val);
        pushintoarr(root->right, nums);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        pushintoarr(root, nums);
        return buildBalancedBST(nums, 0, nums.size() - 1);
    }
};