class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp; int size = nums.size();
        vector<int> ans;
        for(int i=0;i<size;i++){
            mp[nums[i]]++;
        }
        for(auto s:mp){
            if(s.second > size/3){
                ans.push_back(s.first);
            }
        }
        return ans;
    }
};