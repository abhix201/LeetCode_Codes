class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int ans = 0;
        for(int i=0;i<v.size();i++){
            int cnt = 0;
            for(int j=0;j<v[i].size();j++){
                cnt += v[i][j];
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};