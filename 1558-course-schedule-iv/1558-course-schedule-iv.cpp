class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        //2d array to show the connection between nodes
        int n = numCourses;
        vector<vector<bool>> connected(n, vector<bool> (n, false));
        //set directions from p
        for (const auto&p : prerequisites) {
            connected[p[0]][p[1]] = true;
        }
        //apply the floy marshall algorithm
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    connected[i][j] = connected[i][j] || (connected[i][k] && connected[k][j]);
                }
            }
        }
        //generate the result for the queries
        vector<bool> ans;
        for (const auto& q : queries) {
            ans.push_back(connected[q[0]][q[1]]);
        }
        return ans;
    }
};