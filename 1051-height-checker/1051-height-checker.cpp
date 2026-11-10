class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expacted = heights;
        sort(expacted.begin(), expacted.end());
        int cnt= 0;
        for(int i=0; i<expacted.size(); i++){
            if(expacted[i] != heights[i]) cnt++;
        }
        return cnt;
    }
};