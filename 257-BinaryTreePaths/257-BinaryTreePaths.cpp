// Last updated: 5/10/2026, 11:52:04 PM
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
    void func(TreeNode*root,string path, vector<string>&ans){
    
        if(root == NULL){
            return;
        }
        path += to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(path);
            return;
        }
        func(root->left, path + "->", ans);
        func(root->right, path + "->", ans);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        func(root, "", ans);
        return ans;
    }
};