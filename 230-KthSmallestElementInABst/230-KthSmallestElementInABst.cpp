// Last updated: 5/10/2026, 11:52:16 PM
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
    void Preorder(TreeNode* root, vector<int>&result){
        if(root == NULL) return;
        Preorder(root->left,result);
        result.push_back(root->val);
        Preorder(root->right, result);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>nums;
        Preorder(root, nums);
        return nums[k-1];
    }
};