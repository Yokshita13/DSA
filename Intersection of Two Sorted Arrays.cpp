class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int> ans;
        int n = arr1.size();
        int m = arr2.size();
        for(int i=0; i<n; i++){
            if(i>0 && arr1[i] == arr1[i-1])
                continue;
            for(int j=0; j<m; j++){
                if(arr1[i]==arr2[j]){
                    ans.push_back(arr1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};
