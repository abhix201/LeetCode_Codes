class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (!ans.empty() && ans.back()[0] == nums1[i][0]) {
                ans.back()[1] += nums1[i][1];
            }
            else {
                ans.push_back(nums1[i]);
            }
        }
        return ans;
    }
};