class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            if(a % 2 == 0 && b % 2 != 0)
                return true;
            
            if(a % 2 != 0 && b % 2 == 0)
                return false;
            
            return a < b;
        });
    }
};
