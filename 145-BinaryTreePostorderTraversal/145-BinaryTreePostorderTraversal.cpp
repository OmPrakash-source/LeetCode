// Last updated: 5/10/2026, 11:53:17 PM
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
    void post(TreeNode* root, vector<int>&temp){
        if(root == NULL) return;
        post(root->left,temp);
        post(root->right,temp);
        temp.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>temp;
        post(root, temp);
        return temp;
    }
};