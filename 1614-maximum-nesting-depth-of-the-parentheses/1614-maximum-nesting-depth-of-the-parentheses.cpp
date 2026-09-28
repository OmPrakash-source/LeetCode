// class Solution {
// public:
//     int maxDepth(string s) {
//         int depth = 0;
//         int maxi = 0;

//         for (char ch : s) {
//             if (ch == '(') {
//                 depth++;
//                 maxi = max(maxi, depth);
//             } 
//             else if (ch == ')') {
//                 depth--;
//             }
//         }

//         return maxi;
//     }
// };

class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi = 0;

        for (char ch : s) {
            if (!st.empty() && ch == ')') {
                maxi = max(maxi, (int)st.size());
                st.pop();
            } 
            else if (ch == '(') {
                st.push(ch);
            }
        }

        return maxi;
    }
};

