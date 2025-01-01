class Solution {
public:
    int maxScore(string s) {
        int ones = count(s.begin(), s.end(), '1');
        int zeros = 0, ans = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '1') {
                ones--;
            }
            else {
                zeros++;
            }
            ans = max(ans, ones + zeros);
        }
        return ans;
    }
};