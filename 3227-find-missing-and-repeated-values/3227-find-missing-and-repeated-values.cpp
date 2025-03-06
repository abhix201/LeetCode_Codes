class Solution {
 public:
  vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    int range = n * n;
    int repeated = -1, missing = -1;
    vector<int> f(range + 1, 0);

    // Count occurrences
    for (auto& row : grid) {
      for (int num : row) {
        f[num]++;
        if (f[num] > 1) repeated = num; // Store repeated value
      }
    }

    // Find missing number
    for (int i = 1; i <= range; i++) {
      if (f[i] == 0) {
        missing = i;
        break; // No need to check further
      }
    }

    return {repeated, missing};
  }
};
