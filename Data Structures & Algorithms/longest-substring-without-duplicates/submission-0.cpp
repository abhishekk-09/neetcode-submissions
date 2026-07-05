class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int len=0,max_len=0;
        int r=0,l=0;
        while(r<s.size())
        {
            while(st.contains(s[r]))
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            len=r-l+1;
            max_len=max(max_len,len);
            r++;
            
        }
        return max_len;
    }
};
