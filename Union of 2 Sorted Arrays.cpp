class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        for(int i=0; i<a.size(); i++){
            while(i>0 &&a[i] == a[i-1]) continue;
            for(int j=0; j<b.size(); j++){
                ans.push_back(a[i]);
                break;
            }
        }
        return ans;
    }
};
