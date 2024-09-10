class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int size = nums.size();
        if(size == 2 || size == 1) return -1;
        sort(nums.begin(),nums.end());
        return nums[size/2];
    }
};