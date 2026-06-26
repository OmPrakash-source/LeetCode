class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> temp;
        int n = chars.size();

        for (int i = 0; i < n; ) {
            int count = 0;
            int j = i;

            // Count consecutive characters
            while (j < n && chars[j] == chars[i]) {
                count++;
                j++;
            }

            // Push the character
            temp.push_back(chars[i]);

            // Push the count if > 1
            if (count > 1) {
                string s = to_string(count);
                for (char c : s)
                    temp.push_back(c);
            }

            // Skip the processed group
            i = j;
        }

        chars = temp;
        return chars.size();
    }
};