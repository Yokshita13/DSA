class Solution {
  public:
    int maxOccured(vector<int>& L, const vector<int>& R) {
        int mx = *max_element(R.begin(), R.end());
        
       vector<int> diff(mx+2,0);
       
       for(int i=0; i<L.size(); i++){
           diff[L[i]]++;
           diff[R[i]+1]--;
       }
       int count=0;
       int maxCount=0;
       int ans=0;
       for(int i=0; i<=mx; i++){
           count+=diff[i];
           
           if(count>maxCount){
               maxCount = count;
               ans = i;
           }
       }
       return ans;
    }
};
