class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            if(nums[i] < 10 && nums[i] == i) return i;
            else{
                int val = nums[i];
                while(val > 0){
                    sum += (val % 10);
                    val /= 10;
                }
                if(sum == i) return i;
            }
        }
        return -1;
    }

};