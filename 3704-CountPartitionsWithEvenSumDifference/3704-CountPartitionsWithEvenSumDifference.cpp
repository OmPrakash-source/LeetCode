// Last updated: 5/10/2026, 11:44:42 PM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0, n=nums.size();
        bool flag = false;
        for(int i=0; i<n-1; i++){
            int sum1=0, sum2=0;
            for(int j=0; j<=i; j++){
                sum1+=nums[j];
            }
            for(int k=i+1; k<=n-1; k++){
                sum2+=nums[k];
            }
            if(abs(sum2-sum1) % 2 == 0){
                count++;
                flag = true;
            }
        }
        return count;
    }
};