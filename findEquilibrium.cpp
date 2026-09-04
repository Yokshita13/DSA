class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int rs = 0;
        int ls = 0;
        int n = arr.size();
        for(int i=0; i<n; i++)
            rs+=arr[i];
        for(int i=0; i<n; i++){
            rs-=arr[i];
            if(ls==rs)
                return i;
            ls+=arr[i];
        }
        return -1;
    }
};
