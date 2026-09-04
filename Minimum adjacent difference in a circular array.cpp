class Solution {
  public:
    int minAdjDiff(vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            int diff = abs(arr[i] - arr[(i + 1) % n]);
            ans = min(ans, diff);
        }

        return ans;
        
    }
};
