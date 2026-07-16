class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nge;
        for(int i : nums1){
            bool hisnext = false;
            // bool found = false;
            for(int j=0; j<nums2.size(); j++){
                if(nums2[j] == i){
                    for(int k = j + 1; k < nums2.size(); k++){
                        if(nums2[k] > i){
                            nge.push_back(nums2[k]);
                            hisnext = true;
                            break;
                        }
                    }
                // found = true;
                // break;
                }
            }
            if(!hisnext) nge.push_back(-1);
        }
        return nge;
    }
};