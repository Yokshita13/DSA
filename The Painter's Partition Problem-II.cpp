class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();

        if(k > n)
            return -1;

        int l = *max_element(arr.begin(), arr.end());
        int r = accumulate(arr.begin(), arr.end(), 0);

        int ans = r;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            int painters = 1;
            int sum = 0;

            for(int i = 0; i < n; i++) {
                if(sum + arr[i] <= mid) {
                    sum += arr[i];
                }
                else {
                    painters++;
                    sum = arr[i];
                }
            }

            if(painters <= k) {
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
