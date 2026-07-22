class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        // vector<int>prefix(n, 1);
        // vector<int>product;
        // for(int i=0; i<nums.size(); i++){
        //     long long pdt = 1;
        //     for(int j=0; j<nums.size(); j++){
        //         if(pdt == 0) break;
        //         if(i != j) pdt *= nums[j];
        //     }
        //     product.push_back(pdt);
        // }
        // return product;

//--------------- Approach 2 ________________________


        // for(int i=1; i<n; i++)
        //     prefix[i] = prefix[i-1] * nums[i-1];

        // int suffix = 1;
        // for(int j = n-1; j>=0; j--){
        //     prefix[j] *= suffix;
        //     suffix *= nums[j];
            
        // }
        // return prefix;

        vector<int>prefix(n, 1);
        vector<int>suffix(n, 1);

        for(int i=1; i<n; i++) prefix[i] =  prefix[i-1] * nums[i-1];
        for(int i = n-2; i>=0; i--) suffix[i] = suffix[i+1] * nums[i+1];

        for(int i=0; i<n; i++){
            prefix[i] *= suffix[i];
        }
        return prefix;
    }
};