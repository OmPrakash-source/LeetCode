class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(), count = 0;
        int next = 0, curr = 0;
        for(int i=0; i<n-1; i++){
            next = max(next, i + nums[i]);
            if(i == curr){
                count++;
                curr = next;
            }
        }
        return count;
    }
};