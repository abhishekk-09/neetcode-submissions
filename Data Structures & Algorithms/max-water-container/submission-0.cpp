class Solution {
public:
    int maxArea(vector<int>& heights) {
       int area=0,mArea=0;
       for(int i=0;i<heights.size();i++)
       {
        for(int j=i+1;j<heights.size();j++)
        {
            int l=min(heights[i],heights[j]);
            area=l*(j-i);
            mArea=max(mArea,area);
        }
       } 
       return mArea;
    }
};
