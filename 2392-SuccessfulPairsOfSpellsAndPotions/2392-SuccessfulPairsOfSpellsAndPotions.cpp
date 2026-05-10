// Last updated: 5/10/2026, 11:45:52 PM
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        int m = potions.size();
        for(int V : spells){
            int st=0, end = m-1;
            int idx = m;
            while(st <= end){
                long long mid = (st + end)/2;
                if((long long)potions[mid] * V >= success){
                    end = mid - 1;
                    idx = mid;
                }else{
                    st = mid + 1;
                }
            }
            ans.push_back(m-idx);
        }
        return ans;
    }
};