class Solution {
public:
    int closer(vector<int>& arr, int x) {
        int l = 0, r = arr.size() - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(arr[mid] == x)
                return mid;
            if(mid > l && arr[mid - 1] == x)
                return mid - 1;
            if(mid < r && arr[mid + 1] == x)
                return mid + 1;

            if(x < arr[mid])
                r = mid - 2;
            else
                l = mid + 2;
        }

        return -1;
    }
};
