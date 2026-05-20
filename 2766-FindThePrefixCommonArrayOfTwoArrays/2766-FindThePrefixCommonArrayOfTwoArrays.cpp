// Last updated: 5/20/2026, 12:28:42 PM
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>nums(A.size(), 0);
        
        
        // appraoch 1
        unordered_map<int,int>mpp;
        mpp[A[0]]++; mpp[B[0]]++;
        if(A[0] == B[0]) nums[0] = 1;

        for(int i=1; i<A.size(); i++){
            int count = 0;
            if(A[i] == B[i]) count++;
            else{
                if(mpp.count(A[i])) count++;
                if(mpp.count(B[i])) count++;
            }
            nums[i] = nums[i-1]+count;
            mpp[A[i]]++; mpp[B[i]]++;
        }

        // Approach 2
        // vector<int>freq(A.size()+1, 0);
        // int common = 0;
        // for(int i=0; i<A.size(); i++){
        //     freq[A[i]]++;
        //     if(freq[A[i]] == 2) common++;

        //     freq[B[i]]++;
        //     if(freq[B[i]] == 2) common++;

        //     nums[i] = common;

        // }
    return nums;
    }
};