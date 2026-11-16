class Solution {
public:
    string func(string s, int k){
        string temp = "";
        int i=0;
        while(i < s.size()){
            int j=i;
            int sum = 0;
            while(j<s.size() && j < i + k){
                sum += (s[j] - '0');
                j++;
            }
            i = j;
            temp += to_string(sum);
        }
        return temp;
    }
    string digitSum(string s, int k) {
        while(s.size() > k){
            s = func(s, k);
        }
        return s;
    }
};