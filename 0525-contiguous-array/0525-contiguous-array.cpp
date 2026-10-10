class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int maxi = 0;
        int n = nums.size();

        // for(int i=0; i<n; i++){
        //     int cnt = 0;
        //     for(int j=i; j<n; j++){
        //         if(nums[j] == 1) cnt++;
        //         else cnt--;

        //         if(cnt == 0)
        //             maxi = max(maxi, j-i+1);
                
        //     }
        // }
        // return maxi;

        vector<int>prefix(n);
        prefix[0] = (nums[0] == 0) ? -1 : 1;
        unordered_map<int, int>mpp;
        mpp[0] = -1;
        for(int i=1; i<n; i++){
            if(nums[i] == 1)  prefix[i] = prefix[i-1] + 1;
            else prefix[i] = prefix[i-1] - 1;
        }

        for(int i=0; i<n; i++){
            if(mpp.find(prefix[i]) != mpp.end())
                maxi = max(maxi, i - mpp[prefix[i]]);
            else
                mpp[prefix[i]] = i;
        }
        return maxi;
    }
};