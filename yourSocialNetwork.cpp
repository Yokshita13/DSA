class Solution {
public:
    vector<vector<int>> friendPairs(vector<int>& arr) {
        int n = arr.size() + 1;
        vector<vector<int>> ans;

        for(int i = 2; i <= n; i++) {
            vector<int> dist(i, 0);

            int cur = i;
            int d = 0;

            while(cur != 1) {
                cur = arr[cur - 2];
                d++;
                dist[cur] = d;
            }

            // j must be in increasing order
            for(int j = 1; j < i; j++) {
                if(dist[j] != 0) {
                    ans.push_back({i, j, dist[j]});
                }
            }
        }

        return ans;
    }
};