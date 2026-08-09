class Solution {
public:
    string largestGoodInteger(string num) {
        
        // int cnt = 1;
        // string ele = "";
        string ans = "";
        int maxi = -1;
        // for(int i=1; i<num.size(); i++){
        //     if(num[i-1] == num[i] && maxi <= num[i]-'0'){
        //         cnt++;
        //         if(ele.size() <= 3) ele+= num[i];
        //         cout<<ele<<" "<<num[i]<<endl;          
        //     }else{
        //         cnt = 1;
        //         if(ele.size() == 3) ans = ele;
        //         ele = "";
        //     }
        //     if(cnt >= 3 && maxi < num[i]-'0'){
        //         maxi = num[i];
        //     }
        // }

        for(int i=0; i<num.size()-2; i++){
            char ele = ' ';
            int cnt = 0;
            for(int j=i+1; j<i+3; j++){
                if(num[i] != num[j])break;
                cnt++;
                if(cnt >= 2){
                    ele = num[i];
                }
            }
            if(maxi < ele - '0'){
                maxi = ele-'0';
                ans = string(3, ele);
            }
        }
    return ans;
    }
};