class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fp(nums);
        vector<int>bp(nums);
        int p=fp[0],x=fp.size();
        for(int i=1;i<x;i++)
        {
            fp[i]=p*fp[i];
            p=fp[i];
        }
        p=bp[x-1];
        for(int i=x-2;i>=0;i--)
        {
            bp[i]=p*bp[i];
            p=bp[i];
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            nums[i]=fp[i-1]*bp[i+1];
        }
        nums[0]=bp[1];
        nums[nums.size()-1]=fp[x-2];
    return nums;
    }
};
