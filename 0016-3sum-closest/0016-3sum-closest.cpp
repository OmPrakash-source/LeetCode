class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int diff = INT_MAX;
        int result = 0;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                int sum = nums[i] + nums[j];
                for(int k=j+1; k<n; k++){
                    sum+=nums[k];
                    if(abs(target - sum) < diff){
                        result = sum;
                        diff = min(abs(target - sum), diff);
                    }
                    sum -= nums[k];
                }
            }
        }
        return result;
    }
};