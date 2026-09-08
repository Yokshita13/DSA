class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();

        if(k > n)
            return -1;

        long long l = *max_element(arr.begin(), arr.end());
        long long r = accumulate(arr.begin(), arr.end(), 0LL);
        long long ans = r;

        while(l <= r) {
            long long mid = l + (r - l) / 2;

            int students = 1;
            long long pages = 0;

            for(int i = 0; i < n; i++) {
                if(pages + arr[i] <= mid) {
                    pages += arr[i];
                }
                else {
                    students++;
                    pages = arr[i];
                }
            }

            if(students <= k) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return int(ans);
    }
};
