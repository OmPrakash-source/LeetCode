class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j=n-1;
        int result = 0;
        while(i < j){
             result = max(result, min(height[i], height[j]) * ((j+1) - (i+1)));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return result;
    }
};