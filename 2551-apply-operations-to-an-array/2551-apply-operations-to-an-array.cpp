class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        int l = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[l]);
                l++;
            }
        }
        return nums;
    }
};