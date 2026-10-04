class Solution {
public:
    int determinant(vector<vector<int>>& mat) {
        int n = mat.size();

        if(n == 1)
            return mat[0][0];

        if(n == 2)
            return mat[0][0] * mat[1][1]
                 - mat[0][1] * mat[1][0];

        int ans = 0;

        for(int col = 0; col < n; col++) {
            vector<vector<int>> sub(n - 1, vector<int>(n - 1));

            for(int i = 1; i < n; i++) {
                int k = 0;
                for(int j = 0; j < n; j++) {
                    if(j == col)
                        continue;
                    sub[i - 1][k++] = mat[i][j];
                }
            }

            int sign = (col % 2 == 0) ? 1 : -1;
            ans += sign * mat[0][col] * determinant(sub);
        }

        return ans;
    }
};
