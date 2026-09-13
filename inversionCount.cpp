class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        int res = 0;
        // for(int i=0; i<(n-1); i++){
        //     for(int j=1; j<n; j++){
        //         if(arr[i]>arr[j]){
        //             res++;
        //         }
        //     }
        //     return res;
        // }
        
        int i = n-1;
        int j = 1;
        while(i>=0 && j<n){
            if(arr[i]>arr[j]){
                res++;
            }
        }
        return res;
    }
};
