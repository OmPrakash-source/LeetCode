class Solution {
public:
    string result = "";
    void dfs(TreeNode* root, string temp){
        if(!root) return;
        temp += (root->val + 'a');
        if(root->left==NULL && root->right==NULL){
            reverse(temp.begin(), temp.end());
            if(result=="" || result > temp){
                result = temp;
            }
        }
        dfs(root->left, temp);
        dfs(root->right, temp);
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        
        return result;
    }
};