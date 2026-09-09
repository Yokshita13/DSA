class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int smallest = 1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == smallest){
                smallest = i;
            }
            if(arr[i]>smallest){
                return smallest;
            }
        }
        return smallest;
    }
};
