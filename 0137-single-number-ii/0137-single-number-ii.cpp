class Solution {
public:
    int singleNumber(vector<int> &nums) {
        unordered_map<int, int> mp;
        for (int s : nums) {
            mp[s]++;
        }
        int ans = 0;
        //stored to use the freq of each element

        //we can use for(auto s : mp) where the foreach loop will automatically recognise that we are using pair<int,int> in this case of map
        for (pair<int, int> m : mp) {
            if (m.second == 1) {
                ans = m.first;
                break;
            }
        }
        return ans;
    }
};