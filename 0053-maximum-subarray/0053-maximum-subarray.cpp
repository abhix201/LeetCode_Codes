class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int best = INT_MIN;
        int ans = 0;
        for(int i=0;i<size;i++){
            ans = max(nums[i],ans+nums[i]);
            best = max(best,ans);
        }
        return best;
    } 
};

