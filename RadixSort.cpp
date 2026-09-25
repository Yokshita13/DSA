class Solution {
public:
    void radixSort(vector<int>& arr) {
        int mx = *max_element(arr.begin(), arr.end());

        for(int pos = 1; mx / pos > 0; pos *= 10) {
            int count[10] = {0};
            vector<int> output(arr.size());

            for(int x : arr)
                count[(x / pos) % 10]++;

            for(int i = 1; i < 10; i++)
                count[i] += count[i - 1];

            for(int i = arr.size() - 1; i >= 0; i--) {
                int d = (arr[i] / pos) % 10;
                output[count[d] - 1] = arr[i];
                count[d]--;
            }

            arr = output;
        }
    }
};
