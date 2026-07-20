class Solution {
public:
    int trap(vector<int>& height) {
        int lm = 0, rm = 0, l = 0, r = height.size()-1, count = 0;
        while(l < r){
            if(height[l] > lm) lm = height[l];
            if(height[r] > rm) rm = height[r];
            if(height[l] < height[r]){
                count += min(lm, rm) - height[l++];
            }else{
                count += min(lm, rm) - height[r--];
            }
        }
        return count;
    }
};