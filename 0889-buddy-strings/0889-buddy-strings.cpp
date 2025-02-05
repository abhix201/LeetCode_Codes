class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;
        if (s == goal) {
            vector<int> f(26, 0);
            for (char ch : s) {
                f[ch - 'a']++;
                if (f[ch - 'a'] > 1) return true;
            }
            return false;
        }
        vector<int> d;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                d.push_back(i);
            }
        }
        if (d.size() != 2) return false;
        swap(s[d[0]], s[d[1]]);
        return s == goal;
;
    }
};