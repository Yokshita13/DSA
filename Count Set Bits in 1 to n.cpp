class Solution {
public:
    int countSetBits(int n) {
        if (n == 0)
            return 0;

        int x = 0;
        while ((1 << (x + 1)) <= n)
            x++;

        int bitsTill2x = (x == 0) ? 0 : x * (1 << (x - 1));
        int msbBits = n - (1 << x) + 1;
        int rest = n - (1 << x);

        return bitsTill2x + msbBits + countSetBits(rest);
    }
};
