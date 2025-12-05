class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }

        return sum % 2 == 0 ? nums.size() - 1 : 0;
    }
};