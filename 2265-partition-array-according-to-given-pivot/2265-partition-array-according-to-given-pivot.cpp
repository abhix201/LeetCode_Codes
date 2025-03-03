class Solution {
 public:
  vector<int> pivotArray(vector<int>& nums, int pivot) {
    int n = nums.size();
    vector<int> s, g, e;
    for (int i : nums) {
      if (i < pivot) s.push_back(i);
      if (i > pivot) g.push_back(i);
      if (i == pivot) e.push_back(i);
    }
    s.insert(s.end(), e.begin(), e.end());
    s.insert(s.end(), g.begin(), g.end());
    return s;
  }
};
