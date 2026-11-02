class Solution {
public:

int n;
    int findNext(vector<vector<int>>& events, int st, int endIdx){
        int l = st, r = n-1, ans = n;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(events[mid][0] > endIdx){
                ans = mid;
                r= mid-1;
            }else l = mid+1;
        }
        return ans;
    }
    int dfs(int idx, int k, vector<vector<int>>& events, vector<vector<int>>& dp){
        if(idx >= n || k <= 0) return 0;

        if(dp[idx][k] != -1) return dp[idx][k];

        int skip = dfs(idx+1, k, events, dp);

        int next = findNext(events, idx+1, events[idx][1]);

        int take = events[idx][2] + dfs(next, k-1, events, dp);
        return dp[idx][k] = max(take, skip);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        n = events.size();
        sort(events.begin(), events.end());
        vector<vector<int>>dp(n , vector<int>(3, -1));
        return dfs(0, 2, events, dp);
    }
};