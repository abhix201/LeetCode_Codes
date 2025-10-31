class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i : nums) {
            mp[i]++;
        }

        for (auto it : mp) {
            if (it.second > 1) ans.push_back(it.first);
        }

        return ans;
    }
};