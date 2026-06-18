// Last updated: 6/18/2026, 4:19:30 PM
class Solution {
    String reverse(String s){
        String st = "";
        for(int k=s.length()-1; k>=0; k--){
            st += s.charAt(k);
        }
        return st;
    }
    String removeLast(String st){
        if(st.length() == 0) return st;

        String res = "";
        for(int i = 0; i < st.length() - 1; i++){
            res += st.charAt(i);
        }
        return res;
    }
    public String processStr(String s) {
        String result = "";
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            if(ch == '%') result = reverse(result);
            else if(ch == '#'){
                String copy = result;
                result = result + copy;
            }
            else if(ch == '*') result = removeLast(result);
            else result += s.charAt(i);
        }
        return result;
    }
}