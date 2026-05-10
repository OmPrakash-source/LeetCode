// Last updated: 5/10/2026, 11:53:02 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i = 0;
        int j = num.size() - 1;
        vector<int> res;
        while(i < j){
            if(num[i] + num[j] == target){
                // cout<< i+1 <<", "<< j+1;
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }else if(num[i] + num[j] > target){
                j--;
            }else i++;
        }
   return res;
    }
};