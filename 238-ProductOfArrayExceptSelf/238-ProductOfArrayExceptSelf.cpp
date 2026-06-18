// Last updated: 6/18/2026, 4:24:14 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
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
    int n = nums.size();
        vector<int>prefix(n, 1);
        for(int i=1; i<n; i++)
            prefix[i] = prefix[i-1] * nums[i-1];

        int suffix = 1;
        for(int j = n-1; j>=0; j--){
            prefix[j] *= suffix;
            suffix *= nums[j];
            
        }
        return prefix;
    }
};