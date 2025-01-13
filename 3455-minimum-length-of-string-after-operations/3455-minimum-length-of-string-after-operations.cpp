class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        if (n == 1) return 1;
        if (n == 2) return 2;
        unordered_map<char, int> mp;
        for (char i : s) {
            mp[i]++;
        }
        for (auto it : mp) {
            if (it.second > 2 && it.second % 2 == 0) {
                n -= (it.second - 2);
            }
            if (it.second > 1 && it.second % 2 != 0) {
                n -= it.second;
                n += 1;
            }
        }
        return n;
    }
};