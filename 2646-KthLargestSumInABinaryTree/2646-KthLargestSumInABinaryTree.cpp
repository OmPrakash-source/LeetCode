// Last updated: 5/10/2026, 11:45:25 PM
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>result;
        if (!root) return -1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int qsize = q.size();
            long long sum = 0;
            for(int i=0; i<qsize; i++){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            result.push_back(sum);
        }
        if(k > result.size()) return -1;
        sort(result.begin(), result.end(), greater<long long>());
        return result[k-1];
    }
};