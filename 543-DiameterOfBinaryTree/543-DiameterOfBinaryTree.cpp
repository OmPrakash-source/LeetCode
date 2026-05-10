// Last updated: 5/10/2026, 11:50:44 PM
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
int height(TreeNode* root){
    if(root == NULL) return 0;
    int r = height(root->right);
    int l = height(root->left);
    return max(l,r) + 1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int o_1 = diameterOfBinaryTree(root->left);
        int o_2 = diameterOfBinaryTree(root->right);
        int o_3 = height(root->left) + height(root->right);
        return max(o_1, max(o_2,o_3));
    }
};