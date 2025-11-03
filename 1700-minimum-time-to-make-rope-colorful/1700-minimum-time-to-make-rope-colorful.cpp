class Solution {
public:
    int minCost(string s, vector<int>& v) {
        int ans = 0, m = 0, n = s.size();
        for(int i=0;i<n;i++){
            if(i > 0 && s[i] != s[i-1]){
                m = 0;
            }
            ans += min(m, v[i]);
            m = max(m,v[i]);
        }
        return ans;
    }
};