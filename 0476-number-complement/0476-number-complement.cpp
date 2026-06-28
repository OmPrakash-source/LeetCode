class Solution {
public:
    int findComplement(int num) {
        if (num == 0) return 1;
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
        int j = st.size() - 1;
        
        for (int i = 0; i < st.size(); i++) {
            result += (st[i] - '0') * (1 << j);
            j--;
        }

        return result;
    }
};