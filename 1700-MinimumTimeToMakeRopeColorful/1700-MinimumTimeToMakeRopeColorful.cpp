// Last updated: 5/10/2026, 11:46:54 PM
class Solution {
public:
    int minCost(string colors, vector<int>& t) {
        int totalcost = 0;
        int n = colors.size();
        for(int i=1; i<n; i++){
            if(colors[i-1] == colors[i]){
                totalcost += min(t[i-1], t[i]);
                t[i] = max(t[i], t[i - 1]); 
            }
        }
        return totalcost;
    }
};
