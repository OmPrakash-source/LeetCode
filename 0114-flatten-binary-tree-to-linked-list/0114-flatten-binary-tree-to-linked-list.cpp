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
    void vis(TreeNode* root, vector<TreeNode*> &nodes){
        if(root == NULL) return;
        nodes.push_back(root);
        vis(root->left, nodes);
        vis(root->right, nodes);
    }
public:
    void flatten(TreeNode* root) {
        vector<TreeNode*>nodes;
        if(root == NULL) return;
        vis(root, nodes);
        for(int i=0; i<nodes.size()-1; i++){
            nodes[i]->left = NULL;
            nodes[i]->right = nodes[i+1];
        }
        nodes[nodes.size() - 1]->left = NULL;
        nodes[nodes.size() - 1]->right = NULL;
    }
}; 