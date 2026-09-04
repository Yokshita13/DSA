class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int res = 0;
        int cnt = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[res] == arr[i])
                cnt++;
            else
                cnt--;
            if(cnt==0){
                res = i;
                cnt = 1;
            }
        }
        cnt = 0;
        for(int i=0; i<arr.size(); i++)
            if(arr[i] == arr[res])
                cnt++;
        if(cnt<=arr.size()/2)
            return -1;
        return arr[res];
    }
};
