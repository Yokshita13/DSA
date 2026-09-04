class Solution {
  public:
    int typeOfArr(vector<int>& arr) {
        int n = arr.size();
        int inc=0, dec=0;
        for(int i=0; i<n-1; i++){
            if(arr[i]<arr[i+1])
                inc++;
            else
                dec++;
        }
        if(inc == n-1)
            return 1;
        if(dec == n-1)
            return 2;
            
        // if(arr[0]<arr[n-1])
        //     return 4;
        // else
        //     return 3;
        if(inc>dec)
            return 4;
        else
            return 3;
    }
};
