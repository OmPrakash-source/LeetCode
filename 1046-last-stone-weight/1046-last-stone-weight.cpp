class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        // stones.erase(unique(stones.begin(), stones.end()), stones.end());
        for(int i : stones) q.push(i);

        while(!q.empty() && q.size() > 1){
            int qtop = q.top();
            q.pop();
            int result = qtop - q.top();
            q.pop();
            q.push(result);
        }
        return (!q.empty()) ? q.top() : 0;
    }
};