// Last updated: 5/10/2026, 11:52:41 PM
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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        TreeNode* node;
        int n;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            n = q.size();
            ans.push_back(q.front()->val);
            for(int i=0; i<n; i++){
                node = q.front();
                q.pop();
                if(node->right)q.push(node->right);
                if(node->left)q.push(node->left);
            }
        }
        return ans;
    }
};