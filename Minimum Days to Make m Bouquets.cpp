class Solution {
  public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();

        if((long long)m * k > n)
            return -1;

        int l = *min_element(arr.begin(), arr.end());
        int r = *max_element(arr.begin(), arr.end());
        int ans = r;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            int bouquets = 0;
            int flowers = 0;

            for(int i = 0; i < n; i++) {

                if(arr[i] <= mid) {
                    flowers++;

                    if(flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                }
                else {
                    flowers = 0;
                }
            }

            if(bouquets >= m) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};
