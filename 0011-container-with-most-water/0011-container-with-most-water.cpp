class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int res=0;
        while(i<j){
            int w=j-i;
            int mini=min(heights[i],heights[j]);
            res=max(w*mini,res);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return res;
    }
};