class Solution {
 public:
  int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int ans = 0;
    vector<int> nums3;
    int n = nums1.size();
    int m = nums2.size();
    if (n == m && m == 1) return nums1[0] ^ nums2[0];
    if (n % 2 == 0 && m % 2 == 0) return 0;
    if (n % 2 != 0 && m % 2 != 0) {
      for (int i : nums1) {
        ans ^= i;
      }
      for (int i : nums2) {
        ans ^= i;
      }
    }
    if (n % 2 == 0 && m % 2 != 0) {
      for (int i : nums1) {
        ans ^= i;
      }
    }
    if (n % 2 != 0 && m % 2 == 0) {
      for (int i : nums2) {
        ans ^= i;
      }
    }
    return ans;
  }
};