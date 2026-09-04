class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            if(arr[i] <= 0 || arr[i] > n)
                arr[i] = n + 1;
        }
        for(int i = 0; i < n; i++) {
            int x = abs(arr[i]);

            if(x >= 1 && x <= n) {
                arr[x - 1] = -abs(arr[x - 1]);
            }
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] > 0)
                return i + 1;
        }

        return n + 1;
    }
};
