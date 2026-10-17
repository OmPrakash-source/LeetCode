class Solution {
public:
    int minSwaps(vector<int>& nums) {

        int n = nums.size();
        vector<pair<pair<int, int>, int>>indexed_nums;

        for(int i=0; i<n; i++){
            int val = nums[i];
            int sum = 0;
            while(val > 0){
                sum += (val%10);
                val /= 10;
            }
            indexed_nums.push_back({{sum, nums[i]}, i});
        }
        sort(indexed_nums.begin(), indexed_nums.end());

        vector<bool>vis(n, false);
        int count = 0;
        for(int i=0; i<n; i++){
            if(vis[i] || indexed_nums[i].second == i) continue;
            int k = 0;
            int j = i;
            
            while(!vis[j]){
                k++;
                vis[j] = true;
                j = indexed_nums[j].second;
            }
            count += k-1;
        }
        return count;
    }
};