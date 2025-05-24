class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        vector<int> p(height.size(), 0);
        vector<int> s(height.size(), 0);
        int mp = 0;
        int ms = 0;
        for (int i = 0; i < height.size(); i++) {
            mp = max(mp, height[i]);
            p[i] = mp;
        }
        for (int i = height.size() - 1; i >= 0; i--) {
            ms = max(ms, height[i]);
            s[i] = ms;
        }
        for (int i = 0; i < height.size(); i++) {
            ans += min(p[i], s[i]) - height[i];
        }
        return ans;
    }
};