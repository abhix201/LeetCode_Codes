using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int left = 0, right = 1, ans = -1;
        while (right < nums.size()) {
            if (nums[right] > nums[left]) {
                int m = nums[right] - nums[left];
                ans = max(ans, m);
            }
            else {
                left = right;
            }
            right++;
        }
        return ans;
    }
};