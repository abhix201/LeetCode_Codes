class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> dp(n + 1, 0); // DP array to store max points at each step
        
        for (int i = n - 1; i >= 0; --i) {
            int points = questions[i][0];
            int next = i + questions[i][1] + 1;
            long long take = points + (next < n ? dp[next] : 0);
            long long skip = dp[i + 1]; // Skip current question
            dp[i] = max(take, skip);
        }
        
        return dp[0];
    }
};
