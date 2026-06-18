// Last updated: 6/18/2026, 4:19:17 PM
class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        String result = "";
        for(String st : words){
            int sum = 0;
            for(int i=0; i<st.length(); i++){
                char ch = st.charAt(i);
                sum += weights[ch - 'a'];
            }
            result +=(char)('z' - (sum%26));
        }
        return result;
    }
}