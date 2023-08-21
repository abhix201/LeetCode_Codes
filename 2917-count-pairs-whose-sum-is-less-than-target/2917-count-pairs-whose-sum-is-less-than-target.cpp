class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int final = 0;
        //we have to count the number of pairs that is less than the target
        int size = nums.size();
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                if(nums[i] + nums[j] < target){
                    final++;
                }
            }
        }
        return final;
    }
};