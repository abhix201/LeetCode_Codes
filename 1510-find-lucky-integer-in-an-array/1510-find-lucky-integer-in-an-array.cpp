class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int i : arr) {
            mp[i]++;
        }
        int temp = -1;
        for (auto it : mp) {
            if (it.first == it.second) {
                if (it.first > temp) {
                    temp = it.first;
                }
            }
        }
        return temp;
    }
};