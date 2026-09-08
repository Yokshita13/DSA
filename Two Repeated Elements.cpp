class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        
        int n = arr.size()-2; 
        vector<int> seen(n+1,0);
        vector<int>rn;
        
        for(int i=0; i<arr.size(); i++){
            if(seen[arr[i]] == 1){
                rn.push_back(arr[i]);
            }
            else{
                seen[arr[i]] = 1;
            }
        }
        return rn;
    }
};
