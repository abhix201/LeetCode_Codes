class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int a = 0, b = 0;
        int n = nums1.size(), m = nums2.size();
        while (a < n && b < m) {
            if (nums1[a][0] == nums2[b][0]) {
                ans.push_back({nums1[a][0], nums1[a][1] + nums2[b][1]});
                a++;
                b++;
            }
            else if (nums1[a][0] < nums2[b][0]) {
                ans.push_back(nums1[a]);
                a++;
            }
            else {
                ans.push_back(nums2[b]);
                b++;
            }
        }
        while (a < n) {
            ans.push_back(nums1[a]);
            a++;
        }
        while (b < m) {
            ans.push_back(nums2[b]);
            b++;
        }
        return ans;
    }
};