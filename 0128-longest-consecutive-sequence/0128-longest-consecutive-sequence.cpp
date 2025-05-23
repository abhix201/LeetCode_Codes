class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        set<int> s(nums.begin(), nums.end());
        int cnt = 1;
        int ans = 0;
        int prev = *s.begin();
        for (auto it = next(s.begin()); it != s.end(); it++) {
            if (*it == prev + 1) cnt++;
            else {
                ans = max(ans, cnt);
                cnt = 1;
            }
            prev = *it;
        }
        ans = max(ans, cnt);
        return ans;
    }
};