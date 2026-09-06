class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int largest = INT_MAX;
        for(int i=0; i<arr.size(); i++){
           if((i == 0 || arr[i]>=arr[i-1]) && (i == arr.size() - 1 || arr[i]>=arr[i+1]))
                return i;
        }
        return -1;
        
    }
};
