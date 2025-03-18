class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int a = 0, i = 0, res = 0;
        int n = nums.size();
        for(int j = 0; j < n; ++j){
            while((a & nums[j]) > 0){
                a ^= nums[i++];
            }
            a |= nums[j];
            res = max(res, j - i + 1);
        }
        return res;
    }
};