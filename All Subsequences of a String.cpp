class Solution {
  public:
    vector<string> powerSet(string &s) {
        vector<string> ans;
        int n = s.size();

        for(int mask = 0; mask < (1 << n); mask++) {
            string temp;

            for(int i = 0; i < n; i++) {
                if(mask & (1 << i))
                    temp += s[i];
            }

            ans.push_back(temp);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
