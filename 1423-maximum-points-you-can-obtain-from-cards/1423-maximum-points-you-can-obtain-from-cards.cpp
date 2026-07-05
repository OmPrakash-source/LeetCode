class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        
        int n = cp.size();
        // int lsum = 0, rsum = 0, idx1 = 0, idxn = 0;
        // for(int i=0; i<k; i++) lsum += cp[i];
        
        // for(int i=n-1; i>=n-k; i--) rsum += cp[i];
        // idx1 += cp[0];
        // for(int i=n-1; i>n-k; i--) idx1 += cp[i];
        // idxn += cp[n-1];
        // for(int i=0; i<k-1; i++){
        //     cout<<idxn<<" -> ";
        //     idxn += cp[i];
        // }

        // cout<<endl<<lsum<<" "<<rsum<<" "<<idx1<<" "<<idxn;
        // return max(lsum, max(rsum, max(idx1, idxn)));
        int sum = 0, ans = 0;
        for(int i=0; i<k; i++) sum += cp[i];

        ans = sum;
        int i = k - 1;
        int j = n - 1;

        while (i >= 0) {
            sum -= cp[i--];
            sum += cp[j--];
            if(ans < sum){
                ans = sum;
            }
        }
        return ans;
    }
};