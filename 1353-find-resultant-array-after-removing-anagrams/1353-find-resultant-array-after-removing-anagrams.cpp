class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<unordered_map<char, int>> f(words.size());
        for (int i = 0; i < words.size(); i++) {
            for (char ch : words[i]) f[i][ch]++;
        }
        vector<string> ans;
        ans.push_back(words[0]);
        for (int i = 1; i < words.size(); i++) {
            if (f[i] != f[i - 1]) ans.push_back(words[i]);
        }
        return ans;
    }
};
