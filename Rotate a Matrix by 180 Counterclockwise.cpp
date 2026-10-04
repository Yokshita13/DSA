class Solution {
public:
    void rotate180(vector<vector<int>>& mat) {
        int n = mat.size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i * n + j < (n * n + 1) / 2)
                    swap(mat[i][j], mat[n - 1 - i][n - 1 - j]);
            }
        }
    }
};
