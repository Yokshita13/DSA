class Solution {
  public:
    int mean(vector<int>& arr) {
        long long sum = 0;

        for(int x : arr)
            sum += x;

        return sum / arr.size();
    }

    int median(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        if(n % 2 == 1)
            return arr[n / 2];

        return (arr[n / 2 - 1] + arr[n / 2]) / 2;
    }
};
