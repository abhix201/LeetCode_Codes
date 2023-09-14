class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        int f = INT_MIN;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            f = max(mp[s[i]],f);
        }
        for(auto it : mp){
            if(it.second != f){
                return false;
                break;
            }
        }
        return true;
    }
};