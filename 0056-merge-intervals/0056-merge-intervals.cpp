class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        int size = v.size();
  sort(v.begin(), v.end());
  vector<vector<int>> ans;
  for (int i = 0; i < size; i++) {
    int start = v[i][0];
    int end = v[i][1];
    if (!ans.empty() and end <= ans.back()[1]) {
      continue;
    }
    for (int j = i + 1; j < size; j++) {
      if (v[j][0] <= end) {
        end = max(end, v[j][1]);
      } else {
        break;
      }
    }
    ans.push_back({start, end});
  }
  return ans;
    }
};