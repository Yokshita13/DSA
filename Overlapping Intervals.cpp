class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        for(auto x : arr){
            if(ans.empty() || x[0]>ans.back()[1])
                ans.push_back(x);
            else 
                ans.back()[1] = max(ans.back()[1], x[1]);
        }
        return ans;
    }
};
