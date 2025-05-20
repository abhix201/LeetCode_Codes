class Solution {
 public:
  bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    vector<int> f(n + 1, 0);
    for (const auto& q : queries) {
      int left = q[0];
      int right = q[1];
      f[left]++;
      if (right + 1 < n) f[right + 1]--;
    }
    int c = 0;
    for (int i = 0; i < n; i++) {
      c += f[i];
      if (nums[i] - c > 0) return 0;
    }
    return 1;
  }
};