class Solution {
  public:
    int floorSqrt(int n) {
        int start = 1;
        int end = n;
        int res = 0;
        
        while(start<=end){
            int mid = start + (end - start) /2;
            if(mid*mid<=n){
                res = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return res;
    }
};
