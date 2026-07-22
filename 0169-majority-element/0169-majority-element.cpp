class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = 0, cunt = 0, n = nums.size();

        for(int i=0; i<n; i++){
            if(cunt == 0){
                el = nums[i];
                cunt = 1;
            }else if(el == nums[i]) cunt++;
            else cunt--;
        }
        cunt = 0;
        for(int i : nums) if(i == el)cunt++;

        return el;
    }
};