class Solution {
 private:
  int digitSum(int i) {
    int sum = 0;
    while (i) {
      int x = i % 10;
      sum += x;
      i /= 10;
    }
    return sum;
  }

 public:
  int countLargestGroup(int n) {
    int ans = 0;
    int count = 0;
    unordered_map<int, int> mp;
    for (int i = 1; i <= n; i++) {
      mp[digitSum(i)]++;
    }
    for (auto i : mp) {
      // cout << i.first << " : " << i.second << endl;
      ans = max(ans, i.second);
    }
    for (auto i : mp) {
      if (i.second == ans) count++;
    }
    return count;
  }
};