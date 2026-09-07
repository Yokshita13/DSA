class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int steps = 0;
        int maxSteps = 0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>arr[i-1]){
                steps++;
                maxSteps = max(maxSteps,steps);
            }
            else{
                steps = 0;
            }
        }
        return maxSteps;
        
    }
};
