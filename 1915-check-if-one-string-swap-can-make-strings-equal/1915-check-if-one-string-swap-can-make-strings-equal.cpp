class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;
        vector<int> d;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                d.push_back(i);
            }
            if (d.size() > 2) return false;
        }
        bool ans = d.size() == 2 && s1[d[0]] == s2[d[1]] && s1[d[1]] == s2[d[0]];
        return ans;
    }
};