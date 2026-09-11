class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n = arr.size();
        int minIdx;
        for(int i=0; i<n-1; i++){
            minIdx = i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[minIdx]){
                    minIdx = j;
                }
            }
            swap(arr[i], arr[minIdx]);
        }
    }
};
