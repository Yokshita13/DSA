class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        int res = 1;
        if(n==0) return arr;
        for(int i=0; i<n; i++){
            if(arr[i] != arr[res-1]){
                arr[res] = arr[i];
                res++;
            }
        }
        arr.resize(res);
        return arr;
        
    }
};
