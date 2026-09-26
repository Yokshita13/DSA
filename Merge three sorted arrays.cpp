class Solution {
public:
    vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;

        while(i < a.size() || j < b.size() || k < c.size()) {
            int x = INT_MAX;

            if(i < a.size()) x = min(x, a[i]);
            if(j < b.size()) x = min(x, b[j]);
            if(k < c.size()) x = min(x, c[k]);

            ans.push_back(x);

            if(i < a.size() && a[i] == x) i++;
            else if(j < b.size() && b[j] == x) j++;
            else k++;
        }

        return ans;
    }
};
