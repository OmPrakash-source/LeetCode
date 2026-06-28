class Solution {
public:
    int findComplement(int num) {
        string st = "";

        while(num > 0){
            st += (num % 2) + '0';
            num /= 2;
        }
        reverse(st.begin(), st.end());
        
        for(int i=0; i<st.size(); i++){
            char ch = st[i];

            if(ch == '0'){
                st[i] = '1';
            }else if(ch == '1'){
                st[i] = '0';
            }
        }
        cout<<st<< " ";
        int result = 0;

        for (char c : st) {
            result = result * 2 + (c - '0');
        }

        return result;
    }
};