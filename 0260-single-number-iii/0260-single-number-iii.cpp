class Solution {
public:
    vector<int> singleNumber(vector<int> &nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int s : nums) {
            mp[s]++;
        }//storing the freq of every element;
        vector<int> ans;
        int a = 0;
        for (pair<int, int> it : mp) {
            if (it.second == 1) {
                a = it.first;
                ans.push_back(a);
            }
        }
        return ans;
    }
};
