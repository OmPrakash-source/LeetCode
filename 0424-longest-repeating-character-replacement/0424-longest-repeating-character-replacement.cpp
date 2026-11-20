class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi = 0, n = s.size();
        
// GIve wrong and on s = ABCDE, k = 1
        // for(int i=0; i<n; i++){
        //     int amax = 0, bmax = 0;
        //     for(int j=i; j<n; j++){
        //         if(s[j] == 'A') amax++;
        //         else bmax++;

        //         int mini = max(amax, bmax);
        //         int len = j-i+1;
        //         if(len - mini <= k){
        //             if(maxi < j-i+1){
        //                 maxi = j-i+1;
        //             }
        //         }else break;
        //     }
        // }

        int i=0, j=0, maxlen = 0;
        unordered_map<char, int>mpp;

        while(j < n){
            mpp[s[j]]++;
            maxlen = max(maxlen, mpp[s[j]]);
            while((j-i+1) - maxlen > k){
                mpp[s[i]]--;
                if(mpp[s[i]] == 0) mpp.erase(s[i]);
                i++;
            }
            if(maxi < j-i+1)
                maxi = j-i+1;
            j++;
        }
        return maxi;
    }
};