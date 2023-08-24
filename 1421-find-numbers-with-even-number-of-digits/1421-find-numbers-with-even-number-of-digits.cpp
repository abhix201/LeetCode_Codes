class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int finalCount = 0;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            int digitCount = 0;
            while(nums[i] > 0){
                int rem = nums[i] % 10;
                digitCount++;
                nums[i] /= 10;
            }
            if(digitCount % 2 == 0){
                finalCount++;
            }
        }
        return finalCount;
    }
};