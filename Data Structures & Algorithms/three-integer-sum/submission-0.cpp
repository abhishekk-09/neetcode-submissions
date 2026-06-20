class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int target,i=0;
        // vector<vector<int>> ans;
        // for(i=0;i<nums.size()-2;i++)
        // {
        //     // two sum
        //     target=-1*nums[i];
        //     unordered_set<int> s;
        //     for(int j=i+1;j<nums.size()-1;j++)
        //     {
        //         if(s.contains(target-nums[j]))
        //         {
        //             ans.push_back({nums[i],nums[j],target-nums[j]});
        //             continue;
        //         }
        //         s.insert(nums[j]);

        //     }
        // }
        // return ans;
        int l,r,i,j;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            l=i+1;
            r=nums.size()-1;
            while(l<r)
            {
                long sum=(long)nums[i]+nums[l]+nums[r];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(r>l && nums[r-1]==nums[r])
                        r--;
                    l++;r--;
                }
                else if(sum<0)
                    l++;
                else
                    r--;
            }
        }
        return ans;
    }
};
