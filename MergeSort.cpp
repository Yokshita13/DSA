class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        for(int i=l; i<r; i++){
            if(arr[l]<arr[l+1]){
                swap(arr[l],arr[l+1]);
            }
        }
        sort(arr.begin(),arr.end());
    }
};
