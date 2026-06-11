class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            auto it=mp.find(x);
            if(it!=mp.end())
            {
                return {min(i,it->second),max(i,it->second)};
            }
            else
                mp[nums[i]]=i;
        }
        return {};
    }
};
