// Last updated: 5/10/2026, 11:46:57 PM
class Solution {
public:
    string restoreString(string s, vector<int>& nums) {
        string result = s;
        for(int i=0; i<nums.size(); i++){
            result[nums[i]] = s[i];
        }
        return result;
    }
};