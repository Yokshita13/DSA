class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        vector<int> prefix;
        int curr = 0;
        for(int i=0; i<arr.size(); i++){
            curr+=arr[i];
            prefix.push_back(curr);
        }
        return prefix;
        
    }
};
