class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        double sum = 0;
        double maxi = INT_MIN;
        int n = nums.size();

        while(j < n){
            sum += nums[j];
            if(j-i+1 == k){
                double val = sum / k;
                if(val > maxi) maxi = val;
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return maxi;
    }
};