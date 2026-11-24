class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int lsum = 0, rsum=0;

        for(int i=0; i<k; i++)
            lsum += card[i];

        int ans = lsum;
        for(int i=0; i<k; i++){
            lsum -= card[k-1-i]; // k se return aana hai 
            rsum += card[n-1-i]; // right se value add karte left
            ans = max(ans, rsum + lsum);
        }
        return ans;
    }
};