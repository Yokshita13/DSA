class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        int count = 0;
        int ans = 0;

        while(n > 0) {
            if(n & 1) {
                count++;
                ans = max(ans, count);
            }
            else {
                count = 0;
            }

            n >>= 1;
        }

        return ans;
    }
};
