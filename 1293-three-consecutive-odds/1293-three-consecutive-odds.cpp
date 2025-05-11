class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
        if (nums.size() < 3) return false; // early exit
        for (int i = 0; i <= nums.size() - 3; i++) {
            if (nums[i] % 2 != 0 && nums[i + 1] % 2 != 0 && nums[i + 2] % 2 != 0)
                return true;
        }
        return false;
    }
};
