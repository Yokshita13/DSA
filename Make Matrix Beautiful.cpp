class Solution {
public:
    int minOperation(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> row(n, 0), col(n, 0);

        int target = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                row[i] += mat[i][j];
                col[j] += mat[i][j];
            }
            target = max(target, row[i]);
        }

        for(int j = 0; j < n; j++)
            target = max(target, col[j]);

        int ans = 0;

        for(int i = 0; i < n; i++)
            ans += target - row[i];

        return ans;
    }
};
