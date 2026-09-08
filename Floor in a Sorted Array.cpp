class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int largest = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= x){
                largest = i;
            }
        }
        return largest;
    }
};
