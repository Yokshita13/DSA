class Solution {
public:
    void binSort(vector<int> &arr) {
        int zero = 0;

        for(int x : arr)
            if(x == 0) zero++;

        for(int i = 0; i < arr.size(); i++)
            arr[i] = (i < zero) ? 0 : 1;
    }
};