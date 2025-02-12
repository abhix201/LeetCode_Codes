class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> maxSum(82,0);
        int ans = -1;
        for(int i : nums){
            int sum = 0; int temp = i;
            while(temp){
                sum += temp % 10;
                temp /= 10;
            }
            if(maxSum[sum] != 0){
                ans = max(ans, maxSum[sum] + i);
            }
            maxSum[sum] = max(maxSum[sum], i);
        }
        return ans;
    }
};