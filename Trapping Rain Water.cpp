class Solution {
  public:
    int maxWater(vector<int> &arr) {
       int l=0;
       int r = arr.size()-1;
       int leftMax = 0;
       int rightMax = 0;
       int ans = 0;
       while(l<r){
           if(arr[l]<=arr[r]){
               if(arr[l]>=leftMax)
                    leftMax = arr[l];
                else
                    ans += leftMax - arr[l];
                l++;
           }
           else{
               if(arr[r]>=rightMax)
                    rightMax = arr[r];
                else
                    ans += rightMax - arr[r];
                r--;
           }
       }
        return ans;
    }
};
