class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n, 0);
        if (n == 1) return {0};
        if (n % 2 != 0) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (i == n / 2) continue;
                if (i < n / 2) {
                    ans[i] = --cnt;
                }
                else {
                    ans[i] = -(ans[n - i - 1]);
                }
            }
        }
        else {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (i < n / 2) {
                    ans[i] = --cnt;
                }
                else {
                    ans[i] = -(ans[n - i - 1]);
                }
            }
        }
        return ans;
    }
};