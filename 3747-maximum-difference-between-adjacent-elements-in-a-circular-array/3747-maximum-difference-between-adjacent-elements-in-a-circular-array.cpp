class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = INT_MIN;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1) {
                temp = abs(static_cast<int>(nums[nums.size() - 1] - nums[0]));
            }
            else {
                temp = abs(static_cast<int>(nums[i + 1] - nums[i]));
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};