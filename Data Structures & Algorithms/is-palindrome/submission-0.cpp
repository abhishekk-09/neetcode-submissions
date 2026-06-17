class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                ch=tolower(ch);
                str+=ch;
            }
        }
        int i=0,l=str.size()-1;
        while(i<l)
        {
            if(str[i]==str[l])
            {
                i++;l--;
            }
            else return false;
        }
        return true;
    }
};
