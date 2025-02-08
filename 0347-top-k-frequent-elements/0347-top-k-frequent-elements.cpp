class Solution {
public:
    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        return a.second < b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> p;
        int cnt = 1;

        for (int i = 0; i < n - 1; i++) {  // Fixed loop condition
            if (nums[i] == nums[i + 1]) {
                cnt++;
            } else {
                p.push_back({nums[i], cnt});
                cnt = 1;
            }
        }
        p.push_back({nums[n - 1], cnt});

        sort(p.begin(), p.end(), cmp);  // Now works because cmp is static

        vector<int> ans;
        for (int i = p.size() - 1; i >= 0; i--) {
            ans.push_back(p[i].first);
            k--;
            if (k == 0) break;
        }
        return ans;
    }
};