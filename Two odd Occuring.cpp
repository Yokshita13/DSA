class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        int n = arr.size();
        int x=0;
        for(int i=0; i<n; i++)
            x ^= arr[i];
        int bit = x & -x;
        int a=0, b=0;
        for(int i=0; i<n; i++){
            if(arr[i] & bit)
                a ^= arr[i];
            else
                b ^= arr[i];
                
        }
        if(a<b)
            swap(a,b);
        return {a,b};
        
    }
};
