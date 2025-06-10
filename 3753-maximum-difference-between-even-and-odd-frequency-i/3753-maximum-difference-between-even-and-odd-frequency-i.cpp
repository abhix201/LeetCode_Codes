class Solution {
public:
    int maxDifference(string s) {
        vector<int> f(26, 0);
        for (char c : s) {
            f[c - 'a']++;
        }
        int evenCnt = INT_MAX;
        int oddCnt = INT_MIN;
        int ans = 0;
        for (int i : f) {
            if (i == 0) continue;
            if (i % 2 == 0) evenCnt = min(evenCnt, i);
            if (i % 2 != 0) oddCnt = max(oddCnt, i);
        }
        return oddCnt - evenCnt;
    }
};