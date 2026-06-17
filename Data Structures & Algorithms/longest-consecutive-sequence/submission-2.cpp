class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // the below code is longest consecutive subsequence present
        // int cnt=0,max_cnt=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(cnt==0)
        //     {
        //         cnt++;
        //         continue;
        //     }
        //     if(nums[i]==nums[i-1]+1)
        //     {
        //         cnt++;
        //     }
        //     else
        //     {
        //         max_cnt=max(cnt,max_cnt);
        //         cnt=1;
        //     }
        // }
        // return max(max_cnt,cnt);
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        for(int num:s)
        {
            if(!s.contains(num-1))
            {
                int current=num;
                int length=1;

                while(s.contains(current+1))
                {
                    current++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
