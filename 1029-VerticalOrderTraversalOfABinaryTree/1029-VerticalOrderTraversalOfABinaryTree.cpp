// Last updated: 5/10/2026, 11:48:55 PM
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*,pair<int,int>>>q; //Node, (row, col)
        map<int,map<int,multiset<int>>>m;

        q.push({root,{0,0}});
        while(!q.empty()){
            auto front = q.front(); q.pop();
            TreeNode* &node = front.first;
            auto coordinate = front.second;
            int &row = coordinate.first;
            int &col = coordinate.second;
            m[col][row].insert(node->val);
            if(node->left) q.push({node->left,{row+1,col-1}});
            if(node->right) q.push({node->right,{row+1,col+1}});
        }
        for(auto v : m){
            auto& colmap = v.second;
            vector<int>temp;
            for(auto colmapv:colmap){
                auto&mset = colmapv.second;
                temp.insert(temp.end(), mset.begin(), mset.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};