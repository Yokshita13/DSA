class Solution {
  public:
    int maxAND(vector<int>& arr) {
        int ans = 0;

        for(int bit = 30; bit >= 0; bit--) {
            int candidate = ans | (1 << bit);
            int count = 0;

            for(int x : arr) {
                if((x & candidate) == candidate)
                    count++;
            }

            if(count >= 2)
                ans = candidate;
        }

        return ans;
    }
};
