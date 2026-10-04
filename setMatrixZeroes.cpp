class Solution {
public:
    void setMatrixZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        bool firstRow = false, firstCol = false;

        // Check first row
        for(int j = 0; j < m; j++)
            if(mat[0][j] == 0)
                firstRow = true;

        // Check first column
        for(int i = 0; i < n; i++)
            if(mat[i][0] == 0)
                firstCol = true;

        // Mark rows and columns
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        // Set marked rows to zero
        for(int i = 1; i < n; i++) {
            if(mat[i][0] == 0) {
                for(int j = 1; j < m; j++)
                    mat[i][j] = 0;
            }
        }

        // Set marked columns to zero
        for(int j = 1; j < m; j++) {
            if(mat[0][j] == 0) {
                for(int i = 1; i < n; i++)
                    mat[i][j] = 0;
            }
        }

        // First row
        if(firstRow) {
            for(int j = 0; j < m; j++)
                mat[0][j] = 0;
        }

        // First column
        if(firstCol) {
            for(int i = 0; i < n; i++)
                mat[i][0] = 0;
        }
    }
};
