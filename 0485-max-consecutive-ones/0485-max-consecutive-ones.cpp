class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int ans = 0;
        for (int s : nums) {
            if (s == 1) {
                cnt++;
                ans = max(ans, cnt);
            }
            else {
                cnt = 0;
            }
        }
        return ans;
    }
};