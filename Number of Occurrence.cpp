class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int freq = 0;
        for(int i=0; i<=arr.size(); i++){
            if(arr[i] == target)
                freq++;
        }
        return freq;
    }
};
