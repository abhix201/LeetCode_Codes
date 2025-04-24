class Solution {
private:
    int distinctSize(vector<int> &nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size();
    }
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int left = 0;
        int res = 0;
        int k = distinctSize(nums);
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            mp[nums[i]]++;
            while (mp.size() == k) {
                res += nums.size() - i;
                mp[nums[left]]--;
                if (mp[nums[left]] == 0) mp.erase(nums[left]);
                left++;
            }
        }
        return res;
    }
};