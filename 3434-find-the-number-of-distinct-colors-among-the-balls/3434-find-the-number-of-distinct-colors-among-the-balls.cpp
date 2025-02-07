class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball, color;
        vector<int> ans;
        for (auto i : queries) {
            int b = i[0];
            int c = i[1];
            if (ball.count(b)) {
                int pC = ball[b];
                if (pC == c) {
                    ans.push_back(color.size());
                    continue;
                }
                if (--color[pC] == 0) color.erase(pC);
            }
            ball[b] = c;
            color[c]++;
            ans.push_back(color.size());
        }
        return ans;
    }
};