class Solution {
  public:
    int maxArea(vector<int> &height) {
        int l = 0;
        int r = height.size() - 1;
        int bars = 0;
        
        while(l<r){
            int h = min(height[l],height[r]);
            int width = r - l - 1;
            
            bars = max(bars,h*width);
            
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return bars;
    }
};
