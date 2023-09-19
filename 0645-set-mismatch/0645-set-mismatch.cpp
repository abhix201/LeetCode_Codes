class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size(), sum = 0, ans = 0, temp = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++){
            if(nums[i] == nums[i+1]){
                temp = nums[i];
                break;
            }
        }
        for(int i=0;i<size;i++){
            sum += nums[i];
        }
        ans = (size * (size+1)/2) - sum;
        vector<int> finale{temp,ans+temp};
        return finale;
    }
};