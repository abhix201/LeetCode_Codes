class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int maxi = 0;
        for(auto it : mp){
            if(it.second > maxi) maxi = it.second;
        }
        for(auto it : mp){
            if(it.second == maxi) ans += maxi;
        }
        return ans;
    }
};