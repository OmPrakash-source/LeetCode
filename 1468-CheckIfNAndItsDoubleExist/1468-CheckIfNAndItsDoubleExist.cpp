// Last updated: 5/10/2026, 11:47:41 PM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i =0; i<arr.size(); i++){
            for(int j = 0; j<arr.size(); j++){
                if(i != j && arr[i] == arr[j] * 2) return true;
            }
        }
        return false;
    }
};