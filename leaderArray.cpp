class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            bool flag = false;

            for(int j = i + 1; j < n; j++) {
                if(arr[i] <= arr[j]) {
                    flag = true;
                    break;
                }
            }

            if(flag == false)
                ans.push_back(arr[i]);
        }

        return ans;
    }
};
