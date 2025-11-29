class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s = 0;
        for (int i : nums) s += i;
        if (s % k == 0) return 0;
        return s % k;
    }
};
