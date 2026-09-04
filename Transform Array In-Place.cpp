class Solution {
  public:
    void arrange(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            int old = arr[i]%n;
            int newVal = arr[old]%n;
            
            arr[i] = old + newVal * n;
        }
        for(int i=0; i<n; i++){
            arr[i]/=n;
        }
    }
};
