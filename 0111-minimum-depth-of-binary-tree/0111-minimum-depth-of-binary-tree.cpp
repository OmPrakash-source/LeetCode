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
    int minDepth(TreeNode* root) {
            if(root == NULL){
            return 0;
        }
        int leftMin = minDepth(root->left);
        int rightMin = minDepth(root->right);
        int height;
        if(leftMin == 0){
            return  height = max(leftMin , rightMin) + 1 ;
        }
        else if(rightMin == 0){
            return  height = max(leftMin , rightMin) + 1 ;
        }
        else{
        
        return  height = min(leftMin , rightMin) + 1;
        }
    }
};