class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        // Directions corresponding to grid values (1: right, 2: left, 3: down, 4: up)
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        // Priority queue for BFS (min-heap), stores {cost, {x, y}}
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        
        // Cost matrix initialized to infinity
        vector<vector<int>> cost(r, vector<int>(c, INT_MAX));
        
        // Start BFS from (0, 0) with cost 0
        pq.push({0, {0, 0}});
        cost[0][0] = 0;

        while (!pq.empty()) {
            auto [curCost, pos] = pq.top();
            pq.pop();

            int x = pos.first, y = pos.second;

            // If we reach the bottom-right corner, return the cost
            if (x == r - 1 && y == c - 1) {
                return curCost;
            }

            // Explore all 4 possible directions
            for (int k = 0; k < 4; ++k) {
                int nx = x + directions[k].first;
                int ny = y + directions[k].second;

                // Check if the new position is valid
                if (nx >= 0 && ny >= 0 && nx < r && ny < c) {
                    // Calculate the new cost
                    int newCost = curCost + (grid[x][y] != k + 1);

                    // Update if this path offers a lower cost
                    if (newCost < cost[nx][ny]) {
                        cost[nx][ny] = newCost;
                        pq.push({newCost, {nx, ny}});
                    }
                }
            }
        }

        // If we cannot reach the destination, return -1 (should not happen in a valid grid)
        return -1;
    }
};