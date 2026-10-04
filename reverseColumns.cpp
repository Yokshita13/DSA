class Solution {
public:
    void reverseColumns(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++) {
            int left = 0, right = m - 1;

            while(left < right) {
                swap(mat[i][left], mat[i][right]);
                left++;
                right--;
            }
        }
    }
};
