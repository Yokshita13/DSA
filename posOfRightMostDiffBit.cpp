class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        int x = m ^ n;

        if(x == 0)
            return -1;

        int pos = 1;

        while((x & 1) == 0) {
            x >>= 1;
            pos++;
        }

        return pos;
        
    }
};
