class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        int total = 0;
        int currMax = arr[0];
        int maxSum = arr[0];
        int currMin = arr[0];
        int minSum = arr[0];
        for(int i=0; i<arr.size(); i++){
            total+=arr[i];
            
            if(i>0){
                currMax = max(arr[i], currMax + arr[i]);
                maxSum = max(maxSum, currMax);
                currMin = min(arr[i], currMin + arr[i]);
                minSum = min(minSum, currMin);
            }
        }
        if(maxSum<0)
            return maxSum;
        else
            return max(maxSum, total - minSum);
    }
};
