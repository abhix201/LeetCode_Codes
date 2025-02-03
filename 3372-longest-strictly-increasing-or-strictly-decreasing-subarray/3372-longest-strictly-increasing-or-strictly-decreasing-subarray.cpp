class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;
        int ans = 0;
        int countIncrease = 1; int maxIncrease = 1;
        int countDecrease = 1; int maxDecrease = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                countIncrease++;
            }
            else {
                maxIncrease = max(maxIncrease, countIncrease);
                countIncrease = 1;
            }
            if (nums[i] > nums[i + 1]) {
                countDecrease++;
            }
            else {
                maxDecrease = max(maxDecrease, countDecrease);
                countDecrease = 1;
            }
        }
        maxIncrease = max(maxIncrease, countIncrease);
        maxDecrease = max(maxDecrease, countDecrease);
        ans = max(maxIncrease, maxDecrease);
        return ans;
    }
};