class Solution {
public:
    string largestGoodInteger(string num) {
       char maxi = '\0';

        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                maxi = max(maxi, num[i]);
            }
        }

        return maxi == '\0' ? "" : string(3, maxi);

    //     string ans = "";
    //     for(int i=0; i<num.size()-2; i++){
    //         char ele = ' ';
    //         int cnt = 0;
    //         for(int j=i+1; j<i+3; j++){
    //             if(num[i] != num[j])break;
    //             cnt++;
    //             if(cnt >= 2){
    //                 ele = num[i];
    //             }
    //         }
    //         if(maxi < ele - '0'){
    //             maxi = ele-'0';
    //             ans = string(3, ele);
    //         }
    //     }
    // return ans;
    }
};