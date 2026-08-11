class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n = arr.size();
        int res = 1;
        int curr = 1;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1])
                curr++;
            else
                curr = 1;
            res = max(res,curr);
        }
        return res;
    }
};
