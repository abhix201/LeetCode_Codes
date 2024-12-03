class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int m = s.size();
        int n = spaces.size();
        string ans;
        ans.reserve(m + n);
        int j = 0;
        for(int i = 0; i < m; i++){
            if(j < n && i == spaces[j]){
                ans += ' ';
                j++;
            }
            ans += s[i];
        }
        return ans;
    }
};