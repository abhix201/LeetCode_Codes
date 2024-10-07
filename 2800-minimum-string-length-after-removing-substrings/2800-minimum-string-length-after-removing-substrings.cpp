class Solution {
public:
    int minLength(string s) {
        int wId = 0;
        for (char c : s) {
            if (wId > 0 && ((s[wId - 1] == 'A' && c == 'B') || (s[wId - 1] == 'C' && c == 'D'))) {
                wId--;
            }
            else {
                s[wId++] = c;
            }
        }
        return wId;
    }
};