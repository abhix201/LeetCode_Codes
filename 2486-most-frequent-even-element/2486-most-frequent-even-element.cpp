class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int size = nums.size();
        map<int,int> mp;
        for(int i=0;i<size;i++){
            if(nums[i] % 2 == 0){
                mp[nums[i]]++;
            }
        }
        int maxEven = -1;
        int maxFreq = 0;
        for(auto s : mp){
            if(s.second > maxFreq){
                maxFreq = s.second;
                maxEven = s.first;
            }
            else if(s.second == maxFreq){
                maxEven = min(maxEven, s.first);
            }
        }
        return maxEven;
    }
};