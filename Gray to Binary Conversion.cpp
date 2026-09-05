class Solution {
  public:
    int grayToBinary(int n) {
        int ans = n;

        while(n > 0) {
            n >>= 1;
            ans ^= n;
        }

        return ans;
    }
};
