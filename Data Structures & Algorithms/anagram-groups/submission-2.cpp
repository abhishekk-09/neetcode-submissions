class Solution {
public:
    // bool check_anagram(string str1,string str2)
    // {
    //     if(str1.length()!=str2.length())
    //         return false;
    //     unordered_map <char,int> mp;
    //     for(auto ch:str1)
    //     {
    //         mp[ch]++;
    //     }
    //     for(auto ch:str2)
    //     {
    //         if(!mp.contains(ch))
    //             return false;
    //         mp[ch]--;
    //     }
    //     for(auto it:mp)
    //     {
    //         if(it.second!=0)
    //          return false;
    //     }
    //     return true;
    // }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // if(strs.size()==1)
        //     return {strs};
        // vector<vector<string>> ans;
        // vector<int> lp (strs.size(), 1);
        // for(int i=0;i<strs.size()-1;i++)
        // {
            
        //     if(lp[i]==1)
        //     {
        //        vector<string> v;
        //        v.push_back(strs[i]);
        //        lp[i]=0;
        //        for(int j=i+1;j<strs.size();j++)
        //        {
        //             if(lp[j]==1)
        //             {
        //                 if(check_anagram(strs[i],strs[j]))
        //                 {
        //                     v.push_back(strs[j]);
        //                     lp[j]=0;
        //                 }
        //             }
        //        }  
        //        ans.push_back(v);
        //     }
        // }
        // if(lp[strs.size()-1]==1)
        // {
        //     ans.push_back({strs[strs.size()-1]});
        // }
        // return ans;
        
        // better approach....
        unordered_map<string,vector<string>> mp;
        for(auto st:strs)
        {
            string s=st;
            sort(st.begin(),st.end());
            mp[st].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
