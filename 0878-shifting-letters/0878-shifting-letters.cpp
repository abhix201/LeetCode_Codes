class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        for (int i = n - 1, m = 0; i >= 0; --i , m %= 26) {
            s[i] = ((s[i] - 'a') + (m += shifts[i])) % 26 + 'a';
        }
        return s;
    }
};