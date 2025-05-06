class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            int num = nums[i];
            int t = target - num;
            if(mp.find(t) != mp.end()){
                return {mp[t], i};
            }
            mp[num] = i;
        }
        return {-1, -1};
    }
};