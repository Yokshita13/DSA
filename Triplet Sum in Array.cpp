class Solution {
public:
    bool hasTripletSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size() - 2; i++) {
            int l = i + 1, r = arr.size() - 1;

            while(l < r) {
                int sum = arr[i] + arr[l] + arr[r];

                if(sum == target)
                    return true;
                else if(sum < target)
                    l++;
                else
                    r--;
            }
        }

        return false;
    }
};
