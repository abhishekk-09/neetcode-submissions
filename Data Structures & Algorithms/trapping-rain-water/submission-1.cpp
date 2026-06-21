class Solution {
public:
    int trap(vector<int>& height){
        // vector<int> left(height.size());
        // vector<int> right(height.size());
        
        // int maxl=0;
        // for(int i=0;i<height.size();i++)
        // {
        //     left[i]=maxl;
        //     maxl=max(maxl,height[i]);  
        // }
        // maxl=0;
        // for(int i=height.size()-1;i>=0;i--)
        // {
        //     right[i]=maxl;
        //     maxl=max(maxl,height[i]);  
        // }
        // int w=0;
        // for(int i=0;i<height.size();i++)
        // {
        //     int t=min(left[i],right[i]);
        //     if(t<=height[i])
        //     {
        //         continue;
        //     }
        //     else
        //      w=w+(t-height[i]);
        // }
        // return w;

        // OPTIMISED APPROACH
        int l=0,r=height.size()-1,maxleft=0,maxright=0;
        int water=0;

        while(l<r)
        {
            if(height[l]<height[r])
            {
                if(maxleft<=height[l]){
                    maxleft=max(maxleft,height[l]);
                }
                else
                    water+=maxleft-height[l];
                l++;

            }
            else{
                if(maxright<=height[r])
                {
                    maxright=max(maxright,height[r]);
                }
                else
                    water+=maxright-height[r];
                r--;
            }
        }
        return water;
    }
};
