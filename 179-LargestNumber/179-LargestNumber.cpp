// Last updated: 5/10/2026, 11:52:51 PM
class Solution {
public:
    static bool cmd(string a, string b){
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>arr;
        for(int i:nums) arr.push_back(to_string(i));

        sort(arr.begin(),arr.end(), cmd);

        if(arr[0] == "0") return "0";
        string result = "";
        for(string i : arr){
            result += i;
        }

        return result;
    }
};