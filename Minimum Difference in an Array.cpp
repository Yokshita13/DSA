class Solution {
  public:
    int minimumDifference(vector<int>& arr) {
        int res = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            for(int j=0; j<i; j++){
                res = min(res, abs(arr[i] - arr[j]));
            }
        }
        return res;
    }
};
