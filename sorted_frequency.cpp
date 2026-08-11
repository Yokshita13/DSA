class Solution {
  public:
    void freqSorted(vector<int>& arr) {
        int n = arr.size();
        
        if(n==0)
            return;
            
        sort(arr.begin(), arr.end());
        int freq = 1;
        int i = 1;
        
        while(i<n){
            if(arr[i] == arr[i-1]){
                freq++;
            }
            else{
                cout<<arr[i-1] << " " << freq<<"\n";
                freq = 1;
            }
            i++;
        }
        cout<< arr[n-1]<<" "<<freq<<"\n";
    }
};
