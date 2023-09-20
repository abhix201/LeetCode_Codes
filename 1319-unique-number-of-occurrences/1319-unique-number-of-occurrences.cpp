class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int size = arr.size();
        for(int i=0;i<size;i++){
            mp[arr[i]]++;
        }
        set<int> ans;
        for(auto it:mp){
            ans.insert(it.second);
        }
        return (ans.size() == mp.size()) ? true:false;
    }
};