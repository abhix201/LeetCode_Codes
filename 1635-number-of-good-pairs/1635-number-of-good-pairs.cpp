class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size = nums.size(), cnt = 0;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};