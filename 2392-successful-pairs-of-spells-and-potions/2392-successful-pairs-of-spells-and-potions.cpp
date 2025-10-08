class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for (int i : spells) {
            int low = 0, high = potions.size() - 1;
            int res = potions.size();
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if ((long long) i * potions[mid] >= success) {
                    res = mid;
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            ans.push_back(potions.size() - res);
        }
        return ans;
    }
};