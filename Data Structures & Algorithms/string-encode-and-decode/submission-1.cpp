class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto st:strs)
        {
            encoded+=to_string(st.size())+"#"+st;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int n=s.size(),i=0;
        while(i<n)
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            i=j;
            ans.push_back(s.substr(i,len));
            i=j+len;
        }
        return ans;
    }
};
