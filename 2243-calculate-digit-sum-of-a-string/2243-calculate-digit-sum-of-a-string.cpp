class Solution {
public:
    // string func(string s, int k){
    //     string temp = "";
    //     int i=0;
    //     while(i < s.size()){
    //         int j=i;
    //         int sum = 0;
    //         while(j<s.size() && j < i + k){
    //             sum += (s[j] - '0');
    //             j++;
    //         }
    //         i = j;
    //         temp += to_string(sum);
    //     }
    //     return temp;
    // }
    string digitSum(string s, int k) {
        // while(s.size() > k){
        //     s = func(s, k);
        // }
        
        while(s.size() > k){
            int sum = 0, cnt = 0;
            string ans = "";
            for(int i=0; i<s.size(); i++){
                if(cnt == k){
                    cnt = 0;
                    ans += to_string(sum);
                    sum = 0;
                }
                cnt++;
                sum += (s[i] - '0');
                if(i+1 == s.size()){
                    ans += to_string(sum);
                }
            }
            s = ans;
        }
        return s;
    }
};