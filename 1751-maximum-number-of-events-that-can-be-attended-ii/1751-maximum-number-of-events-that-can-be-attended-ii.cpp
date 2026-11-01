class Solution {
public:
    int n;
    int findnext(vector<vector<int>>& events, int nextStart, int currEnd){
        int l = nextStart;
        int r = n-1;
        int result = n;
        while(l <= r){
            int midIdx = l + (r-l) / 2;
            if(events[midIdx][0] > currEnd){
                result = midIdx;
                r = midIdx-1;
            }else{
                l = midIdx+1;
            }
        }
        return result;
    }
    int dfs(int idx, vector<vector<int>>& events, vector<vector<int>>&dp, int k){
        if(k <= 0 || idx >= n) return 0;
        if(dp[idx][k] != -1) return dp[idx][k];

        int skip = dfs(idx+1, events, dp, k);
        int next = findnext(events, idx+1, events[idx][1]);
        int take = events[idx][2] + dfs(next, events, dp, k - 1);
        return dp[idx][k] = max(take, skip);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        n = events.size();
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        sort(events.begin(), events.end());
        return dfs(0, events, dp, k);
    }
};