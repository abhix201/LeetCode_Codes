class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long tS = 0;
        long long bS = 0;
        for (int i : grid[0]) {
            tS += i;
        }
        long long ans = LLONG_MAX;
        for (int i = 0; i < grid[0].size(); i++) {
            tS -= grid[0][i];
            ans = min(ans, max(tS, bS));
            bS += grid[1][i];
        }
        return ans;
    }
};