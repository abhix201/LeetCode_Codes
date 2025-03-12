class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = 0;
        int z = 0;
        for (int i : nums) {
            if (i == 0) z++;
            if (i < 0) n++;
        }
        return max(n, static_cast<int>(nums.size() - z - n));
    }
};