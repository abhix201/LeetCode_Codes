class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans(arr);
        sort(ans.begin(), ans.end());
        unordered_map<int, int> mp;
        
        for(int& a : ans){
        	mp.emplace(a, mp.size() + 1);
        }

        // Transform original array to its rank
        for (int i = 0; i < arr.size(); i++) {
            ans[i] = mp[arr[i]];
        }
        return ans;	
    }
};