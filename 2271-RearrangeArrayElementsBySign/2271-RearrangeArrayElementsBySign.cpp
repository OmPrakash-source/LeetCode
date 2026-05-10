// Last updated: 5/10/2026, 11:46:00 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(); 
        int posi = 0;
        int nagi = 1;
        vector<int>temp(n);
        for(int i=0; i<n; i++){
            // nagative 
            if(nums[i] < 0){
                temp[nagi] = nums[i];
                nagi += 2;
            }else{
                temp[posi] = nums[i];
                posi += 2;
            }
        }
        return temp;
    }
};