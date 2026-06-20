class Solution {
public:
    int maxArea(vector<int>& heights) {
        // BRUTE FORCE
    //    int area=0,mArea=0;
    //    for(int i=0;i<heights.size();i++)
    //    {
    //     for(int j=i+1;j<heights.size();j++)
    //     {
    //         int l=min(heights[i],heights[j]);
    //         area=l*(j-i);
    //         mArea=max(mArea,area);
    //     }
    //    } 
    //    return mArea;
    int l=0,r=heights.size()-1;
    int area,mArea=0;
    while(l<r)
    {
        area=(r-l)*(min(heights[l],heights[r]));
        mArea=max(area,mArea);
        
        if(heights[l]<heights[r]) 
            l++;
        else 
            r--;
    }
    return mArea;
    }
};
