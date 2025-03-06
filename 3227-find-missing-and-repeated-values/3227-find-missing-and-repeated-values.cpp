class Solution {
 public:
  vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    int range = n * n;
    vector<int> ans;
    vector<int> f(range + 1, 0);
    for (auto i : grid) {
      for (auto j : i) {
        f[j]++;
        if (f[j] > 1) ans.push_back(j);
      }
    }
    for (int i = 1; i <= range; i++) {
      if (f[i] == 0) {
        ans.push_back(i);
        break;
      }
    }
    return ans;
  }
};
