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
    int result = 0;
    void dfs(TreeNode* root, int sum){
        if(!root) return;
        sum = 10*sum+root->val;
        if(root->left==NULL && root->right==NULL){
            result += sum;
        }
        dfs(root->left, sum);
        dfs(root->right, sum);


    }
    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        return result;
    }
};