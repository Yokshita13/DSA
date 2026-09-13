class Solution {
public:
    string countSort(string s) {
        int count[26] = {0};

        for(char c : s)
            count[c - 'a']++;

        int k = 0;
        for(int i = 0; i < 26; i++)
            while(count[i]--)
                s[k++] = i + 'a';

        return s;
    }
};
