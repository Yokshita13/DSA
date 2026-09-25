class Solution {
public:
    vector<int> maxMeetings(vector<int>& s, vector<int>& f) {
        vector<pair<int,int>> a;
        int n = s.size();

        for(int i = 0; i < n; i++)
            a.push_back({f[i], i + 1});

        sort(a.begin(), a.end());

        vector<int> ans;
        int last = -1;

        for(auto x : a) {
            int idx = x.second;

            if(s[idx - 1] > last) {
                ans.push_back(idx);
                last = f[idx - 1];
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
