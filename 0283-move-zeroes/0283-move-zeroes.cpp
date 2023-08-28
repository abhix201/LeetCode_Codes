class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                int temp = nums[i];
                nums[i] = nums[zero];
                nums[zero] = temp;
                zero++;
            }
        }
    }
};