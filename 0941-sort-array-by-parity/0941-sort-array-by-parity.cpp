class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even , odd;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        for(int i=0;i<odd.size();i++){
            even.push_back(odd[i]);
        }
        return even;

        return nums;
    }
};