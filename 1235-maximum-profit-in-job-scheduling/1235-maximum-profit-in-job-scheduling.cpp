class Solution {
public:
    int dfs(int idx, vector<int>& st, vector<int>& et, vector<int>& profit, vector<int>& dp) {

        int n = st.size();
        if (idx >= n) return 0;

        if (dp[idx] != -1) return dp[idx];

        // int next = idx + 1;
        // while (next < n && st[next] < et[idx]) next++;

        int next = lower_bound(st.begin() + idx + 1, st.end(), et[idx]) - st.begin();

        int take = profit[idx] + dfs(next, st, et, profit, dp);

        int skip = dfs(idx + 1, st, et, profit, dp);

        return dp[idx] = max(take, skip);
    }

    int jobScheduling(vector<int>& st, vector<int>& et, vector<int>& profit) {

        int n = st.size();
        vector<vector<int>> jobs(n, vector<int>(3, 0));

        for (int i = 0; i < n; i++){
            jobs[i][0] = st[i];
            jobs[i][1] = et[i];
            jobs[i][2] = profit[i];
        }

        sort(jobs.begin(), jobs.end());

        for (int i = 0; i < n; i++) {
            st[i] = jobs[i][0];
            et[i] = jobs[i][1];
            profit[i] = jobs[i][2];
        }

        vector<int> dp(n, -1);

        return dfs(0, st, et, profit, dp);
    }
};