class Solution {
  public:
    int countOnes(vector<int>& arr) {
        int ones = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 1)
                ones++;
        }
        return ones;
    }
};
