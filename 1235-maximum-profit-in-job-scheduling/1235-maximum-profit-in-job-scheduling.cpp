class Solution {
public:
    int findNext(vector<int>& st, int endTime, int idx) {
        int n = st.size();
        int l = idx + 1, r = n - 1, ans = n;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (st[mid] >= endTime) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }

    int dfs(int idx, vector<int>& st, vector<int>& et, vector<int>& profit, vector<int>& dp) {

        int n = st.size();
        if (idx >= n) return 0;

        if (dp[idx] != -1) return dp[idx];

        // int next = idx + 1;
        // while (next < n && st[next] < et[idx]) next++; // (Start of next is grater then end of current) 

        // int next = lower_bound(st.begin() + idx + 1, st.end(), et[idx]) - st.begin();

        int next = findNext(st, et[idx], idx);

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