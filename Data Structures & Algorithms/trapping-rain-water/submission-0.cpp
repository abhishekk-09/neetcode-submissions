class Solution {
public:
    int trap(vector<int>& height){
        vector<int> left(height.size());
        vector<int> right(height.size());
        
        int maxl=0;
        for(int i=0;i<height.size();i++)
        {
            left[i]=maxl;
            maxl=max(maxl,height[i]);  
        }
        maxl=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            right[i]=maxl;
            maxl=max(maxl,height[i]);  
        }
        int w=0;
        for(int i=0;i<height.size();i++)
        {
            int t=min(left[i],right[i]);
            if(t<=height[i])
            {
                continue;
            }
            else
             w=w+(t-height[i]);
        }
        return w;
    }
};
