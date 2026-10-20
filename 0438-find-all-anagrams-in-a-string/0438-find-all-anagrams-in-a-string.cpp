class Solution {
public:
    bool isAnagram(string s, string t){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
    vector<int> findAnagrams(string s, string p) {
        int i=0, j=0, n= s.size(), m= p.size();
        if(n < m) return {};
        vector<int>ans;
        vector<int>need(26,0), have(26, 0);
        // while(j < n){
        //     while(j < n && j-i+1 < m) j++;
        //     if(j<n && j-i+1 == m){
        //         string str = s.substr(i, m);
        //         if(isAnagram(str, p)) ans.push_back(i);
        //         i++;
        //         j++;
        //     }
        // }


        for(char ch:p) need[ch - 'a']++;
        while(i < n){
            have[s[i] - 'a']++;
            if(i >= m) have[s[i-m] - 'a']--;
            if(have == need) ans.push_back(i-m+1);
            i++;
        }
        return ans;
    }
};