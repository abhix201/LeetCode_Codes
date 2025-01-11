class Solution {
public:
    bool canConstruct(string s, int k) {
        int oc = 0;
        if(s.size() < k) return false;
        unordered_map<char, int> mp;
        for (auto i : s) {
            mp[i]++;
        }
        for (auto i : mp) {
            if (i.second % 2 != 0) oc++;
        }
        if (oc > k) return false;
        return true;
    }
};