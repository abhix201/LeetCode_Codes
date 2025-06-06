class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        //store the number of servers in each row and column
        int n = grid.size();
        int m = grid[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        // for (auto i : row) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // for (auto i : col) {
        //     cout << i << " ";
        // }
        // cout << endl;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && (row[i] > 1 || col[j] > 1)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};