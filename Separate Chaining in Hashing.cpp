class Solution {
  public:
    vector<vector<int>> separateChaining(vector<int> &arr, int m) {
        vector<vector<int>> hashtable(m);
        for(int x : arr){
            int index = ((x%m)+m)%m;
            hashtable[index].push_back(x);
        }
        return hashtable;
    }
};
