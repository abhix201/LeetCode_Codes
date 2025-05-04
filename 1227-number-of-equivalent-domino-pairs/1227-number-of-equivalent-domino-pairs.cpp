class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        for (auto& i : dominoes) {
            if (i[0] > i[1]) swap(i[0], i[1]);
        }
        int ans = 0;
        unordered_map<int, int> mp;
        for (auto& i : dominoes) {
            int key = i[0] * 10 + i[1];
            mp[key]++;
        }
        for (auto it : mp) {
            if (it.second > 1) {
                ans += (it.second * (it.second - 1)) / 2;
            }
        }
        return ans;
    }
};
