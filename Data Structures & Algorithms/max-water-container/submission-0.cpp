class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r = heights.size()-1;
        int mx=0;
        while(l<r){
            int area = (r-l)*(min(heights[l], heights[r]));
            mx = max(area,mx);
            if(heights[l]<=heights[r]){
                l++;
            }
            else r--;
        }
      
        return mx;
        
    }
};
