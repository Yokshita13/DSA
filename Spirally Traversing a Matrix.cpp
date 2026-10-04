class Solution {
public:
    vector<int> spirallyTraverse(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans;

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        while(top <= bottom && left <= right) {

            // Top row
            for(int j = left; j <= right; j++)
                ans.push_back(mat[top][j]);
            top++;

            // Right column
            for(int i = top; i <= bottom; i++)
                ans.push_back(mat[i][right]);
            right--;

            // Bottom row
            if(top <= bottom) {
                for(int j = right; j >= left; j--)
                    ans.push_back(mat[bottom][j]);
                bottom--;
            }

            // Left column
            if(left <= right) {
                for(int i = bottom; i >= top; i--)
                    ans.push_back(mat[i][left]);
                left++;
            }
        }

        return ans;
    }
};
