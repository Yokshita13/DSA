class Solution {
  public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0;
        int r = n * m - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            int value = mat[mid / m][mid % m];

            if(value == x)
                return true;

            // Left half is sorted
            if(mat[l / m][l % m] <= value) {
                if(mat[l / m][l % m] <= x && x < value)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            // Right half is sorted
            else {
                if(value < x && x <= mat[r / m][r % m])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }

        return false;
    }
};
